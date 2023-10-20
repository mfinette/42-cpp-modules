/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime <maxime@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:04:10 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 11:04:11 by maxime           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	cout << "Animal default constructor called" << endl;
	this->_type = "Default";
}

Animal::Animal( const Animal & src )
{
	cout << "Animal copy constructor called" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	cout << "Animal destructor called" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
		this->_type = rhs._type;
	return *this;
}

std::ostream &			operator<<(ostream &o, Animal const &i)
{
	o << "Value = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Animal::makeSound() const
{
	cout << "**Random Animal noises**" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
string	Animal::getType() const
{
	return this->_type;
}

/* ************************************************************************** */