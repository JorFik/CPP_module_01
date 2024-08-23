/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:00:15 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 16:13:07 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie original_zombie = Zombie("PatientZero");
	Zombie *heap_zombie;
	Zombie *heap_zombie2;

	original_zombie.announce();
	original_zombie.randomChump("dead parrot");
	randomChump("dead man");
	heap_zombie = newZombie("John");
	heap_zombie->announce();
	heap_zombie2 = heap_zombie->newZombie("Jane");
	heap_zombie2->announce();
	delete heap_zombie;
	delete heap_zombie2;
	return (0);
}
