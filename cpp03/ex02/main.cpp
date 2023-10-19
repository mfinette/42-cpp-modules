/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:33 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 17:51:23 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap Clap1("Clap1");
	ClapTrap Clap2("Clap2");
	ScavTrap Scav("Scav");
	FragTrap Frag("Frag");

	Clap1.attack("Clap2");
	Scav.attack("Clap1");
	Frag.attack("Scav");
	Clap1.takeDamage(25);
	Clap1.beRepaired(10);
	Scav.guardGate();
	Frag.highFivesGuys();
}