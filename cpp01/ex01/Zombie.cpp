/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:16:16 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 10:16:38 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	cout << this->_name << " has been destroyed" << endl;
}

void	Zombie::announce()
{
	cout << this->_name << ": BraiiiiiiinnnzzzZ" << endl;
}

void	Zombie::setName(string name)
{
	this->_name = name;
}