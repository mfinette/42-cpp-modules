/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:56:04 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/16 11:26:46 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	if (ac != 2)
		return ((cout << "incorrect argument number" << endl) , 1);
	harl.complain(av[1]);
	return (0);
}