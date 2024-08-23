/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:33:07 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 12:57:15 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

#define HEAP_DESTRUCTOR " was cured by his Plot Armor, now he will be hiding for the rest of his days."
#define STACK_DESTRUCTOR "'s body was already decaying and was not able to keep going."
#define IMMORTAL " will live forever roaming this earth as a Zombie."

class Zombie
{
	private:
		std::string	name;
		int			isHeap;
		Zombie(std::string name, bool isHeap);
		Zombie();

	public:
		Zombie(std::string name);
		~Zombie();
		Zombie(const Zombie &other);
		Zombie& operator =(const Zombie &other);
		void announce(void);
		Zombie *newZombie(std::string name);
		void randomChump(std::string name);
		Zombie *zombieHorde(int N, std::string name);
};

#endif