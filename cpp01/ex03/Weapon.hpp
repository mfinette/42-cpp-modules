/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:09:15 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 17:47:34 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <sstream>

using	std::string;
using	std::cout;
using	std::endl;

class	Weapon
{
	private:
		string	_type;
		
	public:
		Weapon(string type);
		~Weapon();
		void			setType(string type);
		const string	&getType();
	
};

#endif