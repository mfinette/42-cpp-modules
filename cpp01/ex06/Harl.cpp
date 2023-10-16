/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:35:15 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/16 09:55:35 by mfinette         ###   ########.fr       */
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

// void Harl::complain(string inputLevel)
// {
// 	t_func  funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
// 	string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
// 	int i = 0;
// 	while (i < 4 && levels[i].compare(inputLevel))
// 		i++;
// 	if (i < 4) {
// 		cout << "------" << endl;
// 		(this->*funcs[i])();
// 		cout << "------" << endl;
// 	}
// }

void	Harl::complain(string inputLevel)
{
	size_t	i = 0;
	string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4)
	{
		if (inputLevel.compare(levels[i]) == 0)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			Harl::debug();
			Harl::info();
			Harl::warning();
			Harl::error();
			break;
		case 1:
			Harl::info();
			Harl::warning();
			Harl::error();
			break;
		case 2:
			Harl::warning();
			Harl::error();
			break;
		case 3:
			Harl::error();
			break;
		case 4:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
			break;
	}
}
