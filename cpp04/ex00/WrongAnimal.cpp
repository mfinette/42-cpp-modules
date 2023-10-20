/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime <maxime@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:04:12 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 11:04:46 by maxime           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	cout << "WrongAnimal default constructor called" << endl;
	this->_type = "Default";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	cout << "WrongAnimal copy constructor called" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal destructor called" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
		this->_type = rhs._type;
	return *this;
}

std::ostream &			operator<<(ostream &o, WrongAnimal const &i)
{
	o << "Value = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	WrongAnimal::makeSound() const
{
	cout << "**Random WrongAnimal noises**" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
string	WrongAnimal::getType() const
{
	return this->_type;
}

/* ************************************************************************** */