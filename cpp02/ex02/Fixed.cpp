/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:18:15 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 13:30:20 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTORS //
Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(Fixed const &src)
{
	this->setRawBits(src.getRawBits());
}

Fixed::Fixed(const int n) : _value(n << this->_bitNb) 
{
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << _bitNb)))
{
}

// DESTRUCTOR // 
Fixed::~Fixed()
{
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

Fixed	const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
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

bool	Fixed::operator<(Fixed const & rhs)
{
	return (this->_value < rhs._value);
}

bool	Fixed::operator<=(Fixed const & rhs)
{
	return (this->_value <= rhs._value);
}

bool	Fixed::operator>(Fixed const & rhs)
{
	return (this->_value > rhs._value);
}

bool	Fixed::operator>=(Fixed const & rhs)
{
	return (this->_value >= rhs._value);
}

bool	Fixed::operator==(Fixed const & rhs)
{
	return (this->_value == rhs._value);
}

bool	Fixed::operator!=(Fixed const & rhs)
{
	return (this->_value != rhs._value);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	&Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	tmp._value = this->_value++;
	return (tmp);
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	tmp._value = this->_value--;
	return (tmp);
}
