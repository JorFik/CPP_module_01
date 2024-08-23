/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:58:38 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 13:04:08 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	std::cout << this->name << " enter a convention of " << name << ", turning " << N << " of them into Zombies." << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].name = name;
	return (horde);
}
