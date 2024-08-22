/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:28:08 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/22 17:32:24 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::randomChump(std::string name)
{
	Zombie zombie = Zombie(name, false);
	std::cout << this->name << " took a bite of " << name << ", " << std::flush;
	std::cout << name << " is now a Zombie." << std::endl;
	zombie.announce();
}
