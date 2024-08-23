/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:15 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 13:23:44 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	const std::string	brain = "HI THIS IS BRAIN";
	const std::string	*stringPTR = &brain;
	const std::string	&stringREF = brain;

	std::cout << "The memory address of the string:	" << &brain << std::endl;
	std::cout << "The memory address held by stringPTR:	" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:	" << &stringREF << std::endl;

	std::cout << "The value of the string variable:	" << brain << std::endl;
	std::cout << "The value pointed to by stringPTR:	" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF:	" << stringREF << std::endl;
	return (0);
}
