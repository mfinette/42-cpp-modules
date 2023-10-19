/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:35:36 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 10:47:42 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{

	Fixed		a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed( 1234.4321f );
	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
	cout << "c is " << c << endl;
	cout << "d is " << d << endl << endl;

	cout << "a is " << a.toInt() << " as integer" << endl;
	cout << "b is " << b.toInt() << " as integer" << endl;
	cout << "c is " << c.toInt() << " as integer" << endl;
	cout << "d is " << d.toInt() << " as integer" << endl << endl;
	
	cout << "a is " << a.toFloat() << " as float" << endl;
	cout << "b is " << b.toFloat() << " as float" << endl;
	cout << "c is " << c.toFloat() << " as float" << endl;
	cout << "d is " << d.toFloat() << " as float" << endl << endl;
}
