/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:15:14 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 10:00:07 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;

class Zombie
{
	private:
		string	_name;
	public:
		Zombie(string name);
		~Zombie();
		void	announce();
};

void	randomChump(string name);
Zombie	*newZombie(string name);

#endif 