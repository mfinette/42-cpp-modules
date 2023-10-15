/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:34:45 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 14:56:44 by mfinette         ###   ########.fr       */
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

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

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