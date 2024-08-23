/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:28:08 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 16:06:55 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie zombie = Zombie(name, false);
	std::cout << "A zombie took a bite of " << name << ", " << std::flush;
	std::cout << name << " is now a Zombie." << std::endl;
	zombie.announce();
}
