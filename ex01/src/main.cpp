/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:15 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 16:38:52 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		horde_size = 5;
	Zombie	original = Zombie("PatientZero");
	Zombie	*zombie_horde;

	original.announce();
	std::cout << std::endl;
	zombie_horde = original.zombieHorde(horde_size, "John");
	for (int i = 0; i < horde_size; i++)
		zombie_horde[i].announce();
	std::cout << std::endl;
	delete [] zombie_horde;
	zombie_horde = nullptr;
	std::cout << std::endl;
	zombie_horde = zombieHorde(horde_size, "Jane");
	for (int i = 0; i < horde_size; i++)
		zombie_horde[i].announce();
	std::cout << std::endl;
	delete [] zombie_horde;
	zombie_horde = nullptr;
	std::cout << std::endl;
	return (0);
}

