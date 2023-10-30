/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:22:07 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/27 11:48:29 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Random")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &src) : _name(src._name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i];
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete(this->_inventory[i]);
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = rhs._inventory[i];
	}
	return (*this);
}

string	const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(Amateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	delete m;
	cout << this->_name << ": Not enough space in the inventory to equip" << endl;
	return ;
}

void	Character::unequip(int idx)
{
	if (this->_inventory[idx] != NULL)
	{
		this->_inventory[idx] = NULL;
		cout << this->_name << ": Unequipped [ " << idx << " ]" << endl;
	}
	else
		cout << this->_name << ": Cant unequip [ " << idx << " ]" << endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	else
		cout << this->_name << ": Cant use [ " << idx << " ]" << endl;
}