/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:13:48 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 17:34:11 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	cout << "ScavTrap  default constructor called" << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	cout << "ScavTrap constructor called: " << this->_name << endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	cout << "ScavTrap Copy constructor called: " << this->_name << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap destructor called: " << this->_name << endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	cout << "<ScavTrap> " << rhs._name << " has been copied on "<< this->_name << " with copy assignment operator." << std::endl;
	this->_name = rhs._name;
	this->_ad = rhs._ad;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	return (*this);
}

void	ScavTrap::guardGate()
{
	cout << "ScavTrap : " << this->_name << " is now in Gate Keeper mode" << endl;
}

void	ScavTrap::attack(string const &target)
{
	if (this->_ep > 0)
	{
		cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_ad << " points of damage!" << endl;
		this->_ep--;
	}
	else
		cout << "ScavTrap " << this->_name << " doesn't have energy points left. It can't attack !" << endl;	
}
