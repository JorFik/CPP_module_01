/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:35:54 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/22 17:33:29 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	isHeap = -1;
	this->name = name;
}

Zombie::Zombie(std::string name, bool isHeap)
{
	this->name = name;
	this->isHeap = isHeap;
}

Zombie::~Zombie()
{
	if (isHeap == 1)
		std::cout << this->name << " was cured by his Plot Armor, now he will be hiding for the rest of his days." << std::endl;
	else if (isHeap == 0)
		std::cout << this->name << "'s body was already decaying and was not able to keep going." << std::endl;
	else
		std::cout << this->name << " will live forever roaming this earth as a Zombie." << std::endl;
}

Zombie::Zombie(const Zombie &other)
{
	this->name = other.name;
}

Zombie& Zombie::operator =(const Zombie& other)
{
	this->name = other.name;
	return (*this);
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
