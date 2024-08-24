/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:02:49 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/24 17:36:35 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

# define DEBUG_COLOR "\033[1;34m"
# define INFO_COLOR "\033[1;32m"
# define WARNING_COLOR "\033[1;33m"
# define ERROR_COLOR "\033[1;31m"
# define RESET_COLOR "\033[0m"

# define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\nketchup burger. I really do!"
# define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn’t put\nenough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define WARNING_MSG "I think I deserve to have some extra bacon for free. I’ve been coming for\nyears whereas you started working here since last month."
# define ERROR_MSG "This is unacceptable! I want to speak to the manager now."
# define INVALID_MSG "Error: Invalid complaint level."

typedef enum e_level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
}	t_level;

class Harl
{
	public:
		Harl();
		~Harl();
		Harl(const Harl &other);
		Harl	&operator=(const Harl &other);
		void	complain(std::string level);
		void	complain(t_level level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};


#endif