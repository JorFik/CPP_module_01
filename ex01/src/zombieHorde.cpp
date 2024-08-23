/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:58:38 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 16:41:52 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	std::cout << "A Zombie enter a convention of " << name << ", turning " << N << " of them into Zombies." << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].setName(name + " " + std::to_string(i + 1));
	return (horde);
}
