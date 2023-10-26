/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:40:07 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/26 11:40:09 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal()
{
	cout << "AAnimal default constructor called" << endl;
	this->_type = "Default";
}

AAnimal::AAnimal( const AAnimal & src )
{
	cout << "AAnimal copy constructor called" << endl;
	*this = src;
}

AAnimal::AAnimal(string str) : _type(str)
{
	cout << "AAnimal constructor called !" << endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	cout << "AAnimal destructor called" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	if ( this != &rhs )
		this->_type = rhs._type;
	return *this;
}

std::ostream &			operator<<(ostream &o, AAnimal const &i)
{
	o << "Value = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	AAnimal::makeSound() const
{
	cout << "**Random AAnimal noises**" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
string	AAnimal::getType() const
{
	return this->_type;
}

/* ************************************************************************** */