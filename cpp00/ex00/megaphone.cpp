/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:20:56 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/09 10:39:42 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	// i = 1;
	j = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(i = 1; av[i]; i++)
		{
			for (j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]);
			if (i < ac - 1)
				std::cout << ' ';
		}
	}
}