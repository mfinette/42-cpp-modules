/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:08:57 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 13:32:06 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name) : _name(name), _weapon(NULL)
{
	cout << "HumanB constructor called: " << this->_name << endl;
}

HumanB::~HumanB()
{
	cout << "HumanB destructor called: " << this->_name << endl;
}

void	HumanB::attack()
{
	if (this->_weapon)
		cout << this->_name << " attacks with their " << this->_weapon->getType() << endl;
	else
		cout << this->_name << " attacks without a weapon. Very uneffective !" << endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}