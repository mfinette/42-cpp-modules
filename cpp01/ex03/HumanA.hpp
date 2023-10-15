/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:08:59 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 11:58:07 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class	HumanA
{
	private:
		string	_name;
		Weapon	&_weapon;
	public:
		HumanA(string name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif