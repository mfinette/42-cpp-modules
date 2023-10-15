/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:09:12 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 11:42:17 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(string type)
{
	this->_type = type;
}

const string	Weapon::getType()
{
	return (this->_type);
}
