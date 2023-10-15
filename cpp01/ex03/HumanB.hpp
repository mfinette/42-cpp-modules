/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:08:53 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 12:04:32 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class	HumanB
{
	private:
		string	_name;
		Weapon	*_weapon;
	public:
		HumanB(string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif