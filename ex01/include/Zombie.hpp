/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:33:07 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 16:43:05 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

#define HEAP_DESTRUCTOR " was cured by Plot_Armor, and develop new powers {Trust_Issues, Unsufferable_Anxiety), and disappear to never been seen again."
#define STACK_DESTRUCTOR "'s body was already decaying and was not able to keep going."
#define IMMORTAL " will live forever roaming this earth as a Zombie."

class Zombie
{
	private:
		std::string	name;
		int			isHeap;
		Zombie(std::string name, bool isHeap);

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		Zombie(const Zombie &other);
		Zombie	&operator =(const Zombie &other);
		Zombie	*newZombie(std::string name);
		Zombie	*zombieHorde(int N, std::string name);
		void	announce(void);
		void	randomChump(std::string name);
		void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif