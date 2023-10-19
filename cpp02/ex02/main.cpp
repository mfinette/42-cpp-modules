/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:35:36 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 13:26:03 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << b << endl;
    cout << Fixed::max( a, b ) << endl;

    cout << "--------------------------------" << endl;
    Fixed c(42);
    Fixed const d(42);

    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    if (c == d)
        cout << "c == d" << endl;
    else if (c != d)
        cout << "c != d" << endl;
    if (c >= d)
        cout << "c >= d" << endl;
    if (c <= d)
        cout << "c <= d" << endl;
    if (c < d)
        cout << "c < d" << endl;
    else if (c > d)
        cout << "c > d" << endl;

    cout << "Starting, c = " << c << ", d = " << d << endl;
    cout << "c + d : " << c + d << endl;
    cout << "c - d : " << c - d << endl;
    cout << "c / 2 : " << c / 2 << endl;
    cout << "c * 2 : " << c * 2 << endl;

    return (0);
}
