/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:33:07 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/22 17:25:17 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;
		int			isHeap;
		Zombie(std::string name, bool isHeap);

	public:
		Zombie(std::string name);
		~Zombie();
		Zombie(const Zombie &other);
		Zombie& operator =(const Zombie &other);
		void announce(void);
		Zombie *newZombie(std::string name);
		void randomChump(std::string name);
};

#endif