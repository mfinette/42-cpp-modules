/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:09:01 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/11 11:36:07 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	upperswap(char &a)
{
	a = toupper(a);
}

void	plusone(int	&a)
{
	a++;
}

int	main()
{
	char	str[] = "this text should be in caps";
	int		array[] = {1 , 2, 3, 4, 5};

	cout << "// BEFORE ITER (char array) // " << str << endl;
	iter(str, strlen(str), upperswap);
	cout << "// AFTER ITER (char array) // " << str << endl << endl;
	cout << " // BEFORE ITER (int array) // ";
	for (size_t i = 0; i < (sizeof(array) / sizeof(int)) ; i++)
		cout << array[i] << " ";
	cout << endl;
	iter(array, (sizeof(array) / sizeof(int)), plusone);
	cout << "// AFTER ITER (int array) // ";
	for (size_t j = 0; j < (sizeof(array) / sizeof(int)) ; j++)
		cout << array[j] << " ";
	cout << endl;
}