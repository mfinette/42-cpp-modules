/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:14:21 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/09 20:36:38 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

////////////////////////////////////// CONSTRUCTORS DESTRUCTORS OPERATOR //////////////////////////////////////

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter &src)
{
	(void)src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &rhs)
{
	(void)rhs;
	return *this;
}

////////////////////////////////////// CHECKERS //////////////////////////////////////

bool	ScalarConverter::checkChar(string const &str)
{
	if (str.length() == 1 && isascii(str[0]))
		return true;
	return false;
}

bool	ScalarConverter::checkInt(string const &str)
{
	size_t	j = 0;
	size_t	i;
	
	if (str[0] == '-' || str[0] == '+')
		j++;
	for (i = j; i < str.length(); i++)
		if (!isdigit(str[i]))
			return false;
	return true;
}

bool	ScalarConverter::checkFloat(string const &str)
{
	if (str.find('.') != string::npos && str.find('f') != string::npos)
		return true;
	return false;
}

bool	ScalarConverter::checkDouble(string const &str)
{
	if (str.find('.') != string::npos)
		return true;
	return false;
}

////////////////////////////////////// PRINTERS //////////////////////////////////////

void	ScalarConverter::printChar(string const &str)
{
	if (isprint(str[0]))
		cout << "char: " << str[0] << endl;
	else
		cout << "char: not printable" << endl;
	cout << "int: " << static_cast<int>(str[0]) << endl;
	cout << "float: " << static_cast<float>(str[0]) << "f" <<endl;
	cout << "double: " << static_cast<float>(str[0]) << endl << endl;
}

void	ScalarConverter::printInt(string const &str)
{
	long	nb = 0;
	char	c = 0;
	istringstream	s(str);
	s >> nb;
	c = static_cast<char>(nb);
	if (isprint(c))
		cout << "char: " << c << endl;
	else
		cout << "char: not compatible" << endl;
	if (nb <= INT_MAX && nb >= INT_MIN)
		cout << "int: " << static_cast<int>(nb) << endl;
	else
		cout << "int: off limits" << endl;
	cout << "float: " << static_cast<float>(nb) << "f" << endl;
	cout << "double: " << static_cast<double>(nb) << endl << endl;
}

void	ScalarConverter::printFloat(string const &str)
{
	float	nb = atof(str.c_str());
	float	casted_min = static_cast<float>(INT_MIN);
	float	casted_max = static_cast<float>(INT_MAX);
	
	if (isprint(nb))
		cout << "char: " << static_cast<char>(nb) << endl;
	else
		cout << "char: not compatible" << endl;
	if (nb >= casted_min && nb <= casted_max)
		cout << "int: " << static_cast<int>(nb) << endl;
	else
		cout << "int: off limits" << endl;
	cout << "float: " << static_cast<float>(nb) << "f" << endl;
	cout << "double: " << static_cast<double>(nb) << endl << endl;
}

void	ScalarConverter::printDouble(string const &str)
{
	double nb = atof(str.c_str());
	char c = static_cast<char>(nb);
	if (isprint(c))
		cout << "char: " << c <<endl;
	else
		cout << "char: Non printable" << endl;
	if (nb >= static_cast<float>(INT_MIN) && nb <= static_cast<float>(INT_MAX))
		cout << "int: " << static_cast<int>(nb) << endl;
	else
		cout << "int: impossible" << endl;
	if (static_cast<float>(nb) >= FLT_MIN && static_cast<float>(nb) <= FLT_MAX)
		cout << "float: " << static_cast<float>(nb) << "f" << endl;
	else
		cout << "float: impossible" << endl;
	cout << "double: " << static_cast<double>(nb) << endl << endl;
}

////////////////////////////////////// CONVERTER //////////////////////////////////////

void	ScalarConverter::convert(string const &str)
{
	if (str.length() < 1)
		cout << "length of str must be at least 1" << endl;
	else if (str == "nan" || str == "nanf")
	{
		cout << "char: not printable" << endl;
		cout << "int: off limits" << endl;
		cout << "float: nanf" << endl;
		cout << "double: nan" << endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		cout << "char: not printable" << endl;
		cout << "int: off limits" << endl;
		cout << "float: +inff" << endl;
		cout << "double: +inf" << endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		cout << "char: not printable" << endl;
		cout << "int: off limits" << endl;
		cout << "float: -inff" << endl;
		cout << "double: -inf" << endl;
	}
	else if (ScalarConverter::checkChar(str))
		ScalarConverter::printChar(str);
	else if (ScalarConverter::checkInt(str))
		ScalarConverter::printInt(str);
	else if (ScalarConverter::checkFloat(str))
		ScalarConverter::printFloat(str);
	else if (ScalarConverter::checkDouble(str))
		ScalarConverter::printDouble(str);
	else
		cout << "not possible" << endl;
}