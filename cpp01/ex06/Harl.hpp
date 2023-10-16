/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:34:45 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 15:57:03 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <sstream>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

// ************* COLORS
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

// ************* MESSAGES
#define DEBUG "DEBUG : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !"
#define INFO "INFO : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
#define WARNING "WARNING : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR "ERROR : This is unacceptable! I want to speak to the manager now."

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
		
	public:
		Harl();
		~Harl();
		void	complain(string level);
};

typedef void (Harl::*t_func)(void);

#endif