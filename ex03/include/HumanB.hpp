/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:01:47 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 14:05:14 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();
		HumanB &operator=(const HumanB &other);
		HumanB(const HumanB &other);
		void	setWeapon(Weapon &weapon);
		void	attack(void);
};

#endif