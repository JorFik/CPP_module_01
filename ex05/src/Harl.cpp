/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:09:28 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/24 17:37:41 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

Harl::Harl(const Harl &other)
{
	(void)other;
}

Harl	&Harl::operator=(const Harl &other)
{
	(void)other;
	return (*this);
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;
	void	(Harl::*complain_function[4])(void) =
		{	&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error};

	i = 0;
	while (levels[i] != level && i < 4)
		i++;
	if (i > ERROR)
		return (std::cout << INVALID_MSG << std::endl, (void)0);
	(this->*complain_function[i])();
}

void	Harl::complain(t_level level)
{
	void	(Harl::*complain_function[4])(void) =
		{	&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error};

	if (level < DEBUG || level > ERROR)
		return (std::cout << INVALID_MSG << std::endl, (void)0);
	(this->*complain_function[level])();
}

void	Harl::debug(void)
{
	std::cout << DEBUG_COLOR << DEBUG_MSG << RESET_COLOR << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO_COLOR << INFO_MSG << RESET_COLOR << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING_COLOR << WARNING_MSG << RESET_COLOR << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR_COLOR << ERROR_MSG << RESET_COLOR << std::endl;
}

