/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime <maxime@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:20:31 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 11:00:18 by maxime           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat( const Cat & src ) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	cout << "Cat destructor called" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return *this;
}

std::ostream &			operator<<(ostream & o, Cat const & i)
{
	o << "Type = " << i.getType();
	return o;
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