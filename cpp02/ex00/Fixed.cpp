/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:18:15 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/16 17:07:13 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_integer = 0;
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(Fixed const &src)
{
	cout << "Copy constructor called" << endl;
	this->setRawBits(src.getRawBits());
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

int	Fixed::getRawBits() const
{
	cout << "getRawBits called" << endl;
	return (this->_integer);
}

void	Fixed::setRawBits(int const nb)
{
	this->_integer = nb;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	cout << "Copy assignment operator called" << endl;
	if (this != &rhs)
		this->_integer = rhs.getRawBits();
	return (*this);
}
