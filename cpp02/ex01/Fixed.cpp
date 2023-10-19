/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:18:15 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 11:00:02 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS //
Fixed::Fixed()
{
	this->_value = 0;
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(Fixed const &src)
{
	cout << "Copy constructor called" << endl;
	this->setRawBits(src.getRawBits());
}

Fixed::Fixed(const int n) : _value(n << this->_bitNb) 
{
	cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << _bitNb)))
{
	cout << "Float constructor called" << endl;
}

// DESTRUCTOR // 
Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

// FUNCTIONS //
int	Fixed::getRawBits() const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const nb)
{
	this->_value = nb;
}

int		Fixed::toInt() const
{
	return(this->_value >> this->_bitNb);
}

float	Fixed::toFloat() const
{
	return ((float)this->getRawBits() / (1 << this->_bitNb));
}

// OPERATORS //
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	cout << "Copy assignment operator called" << endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

ostream	&operator<<(ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}
