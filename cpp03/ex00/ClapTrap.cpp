/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:38 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 15:12:21 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"),  _hp(10) , _ep(10), _ad(0)
{
}

ClapTrap::ClapTrap(string name) : _name(name) , _hp(10) , _ep(10), _ad(0)
{
	cout << "ClapTrap constructor called" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << "ClapTrap Destructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
	*this = src;
	cout << "Copy constructor called" << endl;
}

void	ClapTrap::attack(const string &target)
{
	if (this->_ep > 0)
	{
		cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_ad << " points of damage!" << endl;
		this->_ep--;
	}
	else
		cout << "ClapTrap " << this->_name << " doesn't have energy points left. It can't attack !" << endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount >= this->_hp)
	{
		cout << "Claptrap " << this->_name << " has taken " << amount << " points of damage. It's dead !" << endl;
		this->_hp = 0;
	}
	else
	{
		this->_hp-=amount;
		cout << "Claptrap " << this->_name << " has taken " << amount << " points of damage. It has " << this->_hp << " hp remaining" << endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	cout << "ClapTrap " << this->_name << " heals for " << amount << " hp. It now has " << this->_hp << " hp !" << endl;
}
