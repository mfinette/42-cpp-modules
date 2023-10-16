/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:12:59 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/16 17:02:36 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_H
#define FIXED_H

#include <iostream>
#include <sstream>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

class Fixed
{
	private:
		int					_integer;
		static const int	_bitNb = 8;	
		
	public:
					Fixed();
					Fixed(Fixed const &src);
					~Fixed();
		Fixed				&operator=(Fixed const &rhs);
		int					getRawBits() const;
		void				setRawBits(int const nb);
};
#endif
