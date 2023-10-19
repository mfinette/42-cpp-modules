/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:12:59 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 10:35:30 by mfinette         ###   ########.fr       */
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
		int					getRawBits() const;
		void				setRawBits(int const nb);
		float				toFloat() const;
		int					toInt() const;
};

ostream						&operator<<(ostream &o, Fixed const &i);

#endif
