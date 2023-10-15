/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:56:04 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 15:58:34 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	string	cmd;
	Harl	harl;
	while (true)
	{
		cout << "Welcome to HARL simulator. Please enter an error level" << endl;
		cout << "Error levels : DEBUG, INFO, WARNING, ERROR" << endl;
		cin >> cmd;
		if (cin.eof())
			return (0);
		harl.complain(cmd);
	}
}