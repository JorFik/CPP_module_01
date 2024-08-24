/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:53:37 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/24 13:50:52 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

static void	search_and_replace_whole_file(t_files &files,
	const std::string &search, const std::string &replacement)
{
	std::stringstream	buffer;
	std::string			file_as_string;
	size_t				pos;

	buffer << files.input.rdbuf();
	if (search.empty())
	{
		files.output << buffer.str() << std::endl;
		return ;
	}
	file_as_string = buffer.str();
	pos = 0;
	while ((pos = file_as_string.find(search, pos)) != std::string::npos)
	{
		file_as_string.erase(pos, search.length());
		file_as_string.insert(pos, replacement);
		pos += replacement.length();
	}
	files.output << file_as_string << std::endl;
}

void	search_and_replace(t_files &files, const std::string &search,
	const std::string &replacement)
{
	std::string	line;
	size_t	pos;

	if (search.empty() || search.find("\n") != std::string::npos)
		return (search_and_replace_whole_file(files, search, replacement));
	while (std::getline(files.input, line))
	{
		pos = 0;
		while ((pos = line.find(search, pos)) != std::string::npos)
		{
			line.erase(pos, search.length());
			line.insert(pos, replacement);
			pos += replacement.length();
		}
		files.output << line << std::endl;
	}
}