/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:35:15 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 15:56:26 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	cout << BLUE << DEBUG << RESET << endl;
}

void	Harl::info()
{
	cout << GREEN << INFO << RESET << endl;
}

void	Harl::warning()
{
	cout << YELLOW << WARNING << RESET << endl;
}

void	Harl::error()
{
	cout << RED << ERROR << RESET << endl;
}

void Harl::complain(string inputLevel) {
	t_func  funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(inputLevel))
		i++;
	if (i < 4) {
		cout << "------" << endl;
		(this->*funcs[i])();
		cout << "------" << endl;
	}
}
