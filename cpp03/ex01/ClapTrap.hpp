/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:35 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 16:07:45 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP

#include <iostream>
#include <sstream>

using std::cout;
using std::endl;
using std::string;

class	ClapTrap
{
	protected:
		string	_name;
		int		_hp;
		int		_ep;
		int		_ad;
		
	public:
		ClapTrap();
		ClapTrap(string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &src);
		void		attack(const string	&target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		ClapTrap	&operator=(ClapTrap const &src);
};

#endif