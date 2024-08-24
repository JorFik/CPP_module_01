/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 16:52:30 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/24 15:10:41 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <filesystem>

# define BAD_ARGS "Error: Invalid number of arguments"
# define BAD_OPEN "Error: Could not open file "
# define BAD_CREATE "Error: Could not create file "

# define input first
# define output second

typedef std::pair<std::ifstream, std::ofstream>	t_files;

void	search_and_replace(t_files &files, const std::string &search,
	const std::string &replacement);

#endif