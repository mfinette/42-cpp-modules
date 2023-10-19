/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:13:51 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 16:31:39 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(string name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap();
		
		ScavTrap	&operator=(ScavTrap	const &rhs);
		void		guardGate();
		void		attack(string const &target);
};



#endif
