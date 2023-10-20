/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:20:31 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 17:38:50 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_Brain = new Brain;
	this->_type = "Cat";
}

Cat::Cat( const Cat & src ) : Animal()
{
	std::cout << "Cat deep copy constructor called" << std::endl;
	this->_type = src._type;
	this->_Brain = new Brain;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->_Brain;
	cout << "Cat destructor called" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
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
void	Cat::makeSound() const
{
	cout << "**Miaows**" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */