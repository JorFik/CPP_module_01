/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:57:36 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 14:01:37 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

HumanA &HumanA::operator=(const HumanA &other)
{
	this->name = other.name;
	this->weapon = other.weapon;
	return (*this);
}

HumanA::HumanA(const HumanA &other) : name(other.name), weapon(other.weapon)
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
