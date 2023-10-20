/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime <maxime@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:07:40 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 11:26:00 by maxime           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	cout << "WrongCat destructor called" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return *this;
}

std::ostream &			operator<<(ostream & o, WrongCat const & i)
{
	o << "Type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	WrongCat::makeSound() const
{
	cout << "**Wrong kind of Miaows**" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */