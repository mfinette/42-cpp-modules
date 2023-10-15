/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:09:02 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 13:31:51 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	cout << "HumanA constructor called: " << this->_name << endl;
}

HumanA::~HumanA()
{
	cout << "HumanA destructor called: " << this->_name << endl;
}

void	HumanA::attack()
{
	cout << this->_name << " attacks with their " << this->_weapon.getType() << endl;
}
