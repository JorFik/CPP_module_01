/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:35:54 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 12:57:23 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	isHeap = -1;
	this->name = name;
}

Zombie::Zombie()
{
	isHeap = 1;
	this->name = "Zombie";
}

Zombie::Zombie(std::string name, bool isHeap)
{
	this->name = name;
	this->isHeap = isHeap;
}

Zombie::~Zombie()
{
	if (isHeap == 1)
		std::cout << this->name << HEAP_DESTRUCTOR << std::endl;
	else if (isHeap == 0)
		std::cout << this->name << STACK_DESTRUCTOR << std::endl;
	else
		std::cout << this->name << IMMORTAL << std::endl;
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

void Zombie::randomChump(std::string name)
{
	Zombie zombie = Zombie(name, false);
	std::cout << this->name << " took a bite of " << name << ", " << std::flush;
	std::cout << name << " is now a Zombie." << std::endl;
	zombie.announce();
}

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, true);
	std::cout << this->name << " reached " << name << ", " << std::flush;
	std::cout << name << " is now a Zombie." << std::endl;
	return (zombie);
}
