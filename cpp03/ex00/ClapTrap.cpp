/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:38 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 16:05:35 by mfinette         ###   ########.fr       */
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

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	cout << "ClapTrap " << src._name << " has been copied on "<< this->_name << " with copy assignment operator." << std::endl;
	this->_name = src._name;
	this->_hp = src._hp;
	this->_ep = src._ep;
	this->_ad = src._ad;
	return (*this);
}
