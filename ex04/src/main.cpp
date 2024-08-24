/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:15 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/24 15:24:10 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

static void	error_handler(const std::string &msg, std::string &output_file)
{
	std::cerr << msg << std::endl;
	std::filesystem::remove(output_file);
	exit(1);
}

static	t_files	&open_files(const std::string &input_file)
{
	std::string		output_file(input_file + ".replace");
	static t_files	files;

	files.input.open(input_file);
	if (!files.input.is_open())
		error_handler(BAD_OPEN + input_file, output_file);
	files.output.open(output_file);
	if (!files.output.is_open() && errno != EACCES)
		error_handler(BAD_CREATE + output_file, output_file);
	if (!files.output.is_open())
	{
		std::cerr << BAD_OPEN + output_file << std::endl;
		exit(1);
	}
	return (files);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << BAD_ARGS << std::endl, 1);
	const std::string	input_file(argv[1]);
	t_files				&files = open_files(input_file);

	search_and_replace(files, argv[2], argv[3]);
	return (0);
}
