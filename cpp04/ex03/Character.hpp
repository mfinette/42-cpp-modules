/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:22:06 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/27 11:53:08 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class	AMateria;
class	ICharacter;

class Character : public ICharacter
{
	private:
		AMateria	*_inventory[4];
		string		_name;
		
	
	public:
		Character();
		Character(string name);
		Character(const Character &src);
		~Character();
		Character &operator=(Character const &rhs);
		string const &getName();
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif
