/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:40:35 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 14:09:52 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
		return ((cout << "incorrect argument number, exiting program" << endl), 1);

	Sed	sed(av[1]);
	sed.replace(av[2], av[3]);
	return (0);
}