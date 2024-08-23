/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:15 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 13:05:30 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		horde_size = 10;
	Zombie	og = Zombie("PatientZero");
	Zombie	*zombie_horde;

	og.announce();
	zombie_horde = og.zombieHorde(horde_size, "John");
	for (int i = 0; i < horde_size; i++)
	{
		zombie_horde[i].announce();
	}
	delete [] zombie_horde;
	zombie_horde = nullptr;
	return (0);
}

