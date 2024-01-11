/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:44:47 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/11 11:00:42 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	cout << "// BEFORE SWAP // a = " << a << ", b = " << b << endl;
	swap( a, b );
	cout << "// AFTER SWAP // a = " << a << ", b = " << b << endl;
	cout << "min( a, b ) = " << min( a, b ) << endl;
	cout << "max( a, b ) = " << max( a, b ) << endl;
	string c = "chaine1";
	string d = "chaine2";
	cout << "// BEFORE SWAP // c = " << c << ", d = " << d << endl;
	swap(c, d);
	cout << "// AFTER SWAP // c = " << c << ", d = " << d << endl;
	cout << "min( c, d ) = " << min( c, d ) << endl;
	cout << "max( c, d ) = " << max( c, d ) << endl;
	return 0;
}
