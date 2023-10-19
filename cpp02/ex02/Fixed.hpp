/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:12:59 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 13:18:06 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_H
#define FIXED_H

#include <iostream>
#include <sstream>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::ostream;

class Fixed
{
	private:
		int					_value;
		static const int	_bitNb = 8;	
		
	public:
							Fixed();
							Fixed(Fixed const &src);
							Fixed(const int n);
							Fixed(const float n);
							~Fixed();
							
		Fixed				&operator=(Fixed const &rhs);
		bool				operator<(Fixed const & rhs);
		bool				operator<=(Fixed const & rhs);
		bool				operator>(Fixed const & rhs);
		bool				operator>=(Fixed const & rhs);
		bool				operator==(Fixed const & rhs);
		bool				operator!=(Fixed const & rhs);

		Fixed				operator*(Fixed const & rhs);
		Fixed				operator/(Fixed const & rhs);
		Fixed				operator+(Fixed const & rhs);
		Fixed				operator-(Fixed const & rhs);

		Fixed				&operator++();
		Fixed				operator++(int);
		Fixed				&operator--();
		Fixed				operator--(int);		

		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed 	&min(const Fixed &a, const Fixed &b);
		static const Fixed 	&max(const Fixed &a, const Fixed &b);
		int					getRawBits() const;
		void				setRawBits(int const nb);
		float				toFloat() const;
		int					toInt() const;
};

ostream						&operator<<(ostream &o, Fixed const &i);

#endif
