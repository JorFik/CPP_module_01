/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:59:17 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/22 17:31:37 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, true);
	std::cout << this->name << " reached " << name << ", " << std::flush;
	std::cout << name << " is now a Zombie." << std::endl;
	return (zombie);
}
