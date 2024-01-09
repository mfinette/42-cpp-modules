/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:57:02 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/09 20:36:13 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include "iostream"
#include <sstream>
#include <climits>
#include <cfloat>
#include <stdlib.h>

using	std::cout;
using	std::string;
using	std::endl;
using	std::istringstream;

class ScalarConverter
{
	private:
	// UTILS
	
	// CHECKERS
	bool				checkChar(string const &str);
	bool				checkInt(string const &str);
	bool				checkFloat(string const &str);
	bool				checkDouble(string const &str);
	
	// PRINTERS
	void				printChar(string const &str);
	void				printInt(string const &str);
	void				printFloat(string const &str);
	void				printDouble(string const &str);
	
	public:
	// CONSTRUCTORS AND DESTRUCTOR
						ScalarConverter();
						ScalarConverter(ScalarConverter &src);
						~ScalarConverter();
	
	// OPERATOR
	ScalarConverter		&operator=(const ScalarConverter &rhs);

	// METHOD
	void				convert(string const &str);
};

#endif