/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:41:03 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 17:45:20 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	cout << "FragTrap  default constructor called" << endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	cout << "FragTrap constructor called: " << this->_name << endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	cout << "FragTrap Copy constructor called: " << this->_name << endl;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap destructor called: " << this->_name << endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	cout << "<FragTrap> " << rhs._name << " has been copied on "<< this->_name << " with copy assignment operator." << std::endl;
	this->_name = rhs._name;
	this->_ad = rhs._ad;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	cout << "FragTrap : " << this->_name << " wants a nice high five !" << endl;
}

void	FragTrap::attack(string const &target)
{
	if (this->_ep > 0)
	{
		cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_ad << " points of damage!" << endl;
		this->_ep--;
	}
	else
		cout << "FragTrap " << this->_name << " doesn't have energy points left. It can't attack !" << endl;	
}
