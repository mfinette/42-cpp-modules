/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:39:35 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 17:49:02 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(string name);
		FragTrap(const FragTrap &src);
		~FragTrap();
		
		FragTrap	&operator=(FragTrap	const &rhs);
		void		highFivesGuys();
		void		attack(string const &target);
};

#endif