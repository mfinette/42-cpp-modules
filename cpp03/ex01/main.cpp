/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:33 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 17:29:55 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ClapTrap Clap1("Clap1");
	ScavTrap Scav("Scav");
	ClapTrap Clap2("Clap2");
	
	ScavTrap scavcpy(Scav);
	
	Clap1.attack("Clap2");
	scavcpy.attack("Clap1");
	Clap2.takeDamage(25);
	Clap2.beRepaired(10);
	scavcpy.guardGate();

}