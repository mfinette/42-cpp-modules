/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:33 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/19 15:11:54 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap clap1("clap1");
	ClapTrap clap2("clap2");

	clap1.attack("clap2");
	clap2.beRepaired(10);
	clap2.takeDamage(25);
	clap2.beRepaired(10);
	clap2.takeDamage(25);
	clap2.takeDamage(4);
	clap2.beRepaired(10);
}