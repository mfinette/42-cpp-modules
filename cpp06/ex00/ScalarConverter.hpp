/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:57:02 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/11 13:00:46 by mfinette         ###   ########.fr       */
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
	static bool				checkChar(string const &str);
	static bool				checkInt(string const &str);
	static bool				checkFloat(string const &str);
	static bool				checkDouble(string const &str);
	
	// PRINTERS
	static void				printChar(string const &str);
	static void				printInt(string const &str);
	static void				printFloat(string const &str);
	static void				printDouble(string const &str);
	
	// CONSTRUCTORS AND DESTRUCTOR
							ScalarConverter();
							ScalarConverter(ScalarConverter &src);
							~ScalarConverter();
	public:
	// OPERATOR
	ScalarConverter			&operator=(const ScalarConverter &rhs);

	// METHOD
	static void				convert(string const &str);
};

#endif