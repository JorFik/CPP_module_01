/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:03:13 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 14:06:46 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr)
{
}

HumanB::HumanB(std::string name, Weapon &weapon) : name(name), weapon(&weapon)
{
}

HumanB::~HumanB()
{
}

HumanB &HumanB::operator=(const HumanB &other)
{
	this->name = other.name;
	this->weapon = other.weapon;
	return (*this);
}

HumanB::HumanB(const HumanB &other) : name(other.name), weapon(other.weapon)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with his bare hands" << std::endl;
}
