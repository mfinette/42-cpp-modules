/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:28:39 by mfinette          #+#    #+#             */
/*   Updated: 2023/11/16 10:28:54 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		Bureaucrat bur("pawn", 10);

		std::cout << "---------------- Presidential form ----------------" << std::endl;
		PresidentialPardonForm pres("toto");
		bur.executeForm(pres);
		bur.signForm(pres);
		bur.executeForm(pres);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return 0;
}
