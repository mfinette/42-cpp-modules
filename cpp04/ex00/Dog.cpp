/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime <maxime@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:24:45 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 11:00:25 by maxime           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog( const Dog & src ) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	cout << "Dog destructor called" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return *this;
}

std::ostream &			operator<<(ostream & o, Dog const & i)
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Dog::makeSound() const
{
	cout << "**Barks**" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */