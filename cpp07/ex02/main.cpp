/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:34:47 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/11 14:53:58 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	try {
		// Test the Array class
		Array<int> intArray(5);
		for (unsigned int i = 0; i < intArray.size(); ++i)
			intArray[i] = i * 10;
		for (unsigned int i = 0; i < intArray.size(); ++i)
			cout << "Element " << i << ": " << intArray[i] << endl;

		// Uncomment the following lines to test exception handling
		// int value = intArray[10];
		// (void)value;
	} catch (const exception& e) {
		cerr << "Exception: " << e.what() << endl;
	}

	return 0;
}
