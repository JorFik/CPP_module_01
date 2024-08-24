/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:15 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/24 17:34:49 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	harl.complain("INVALID");
	std::cout << std::endl;
	harl.complain(DEBUG);
	std::cout << std::endl;
	harl.complain(INFO);
	std::cout << std::endl;
	harl.complain(WARNING);
	std::cout << std::endl;
	harl.complain(ERROR);
	std::cout << std::endl;
	harl.complain((t_level)4);
	return (0);
}
