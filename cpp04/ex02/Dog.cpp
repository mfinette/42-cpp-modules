/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:24:45 by maxime            #+#    #+#             */
/*   Updated: 2023/10/26 11:47:41 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_Brain = new Brain;
}

Dog::Dog( const Dog & src ) : AAnimal()
{
	std::cout << "Dog deep copy constructor called" << std::endl;
	this->_type = src._type;
	this->_Brain = new Brain;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->_Brain;
	cout << "Dog destructor called" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	this->_Brain = new Brain(*rhs._Brain);
	return (*this);
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
