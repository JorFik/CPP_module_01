/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:40:51 by JFikents          #+#    #+#             */
/*   Updated: 2024/08/23 14:03:08 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon(std::string type);
		~Weapon();
		Weapon &operator=(const Weapon &other);
		Weapon(const Weapon &other);
		const std::string	&getType(void);
		void				setType(std::string type);
};

#endif