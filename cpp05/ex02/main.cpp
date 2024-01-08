/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:41:57 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/08 15:22:26 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdlib.h>

int	main() {
	Bureaucrat	Hervé("Hervé", 1);
	Bureaucrat	Alain("Alain", 42);
	std::cout << Hervé << Alain;

	ShrubberyCreationForm form1("home");
	PresidentialPardonForm form2("Kevin");
	RobotomyRequestForm form3("Jordan");
	srand(time(NULL));

	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "Trying to sign and execute 1 - ShrubberyCreationForm : " << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	try {
		Hervé.signForm(form1);
		Hervé.executeForm(form1);
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Trying to sign and execute 2 - PresidentialPardonForm : " << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	try {
		Hervé.signForm(form2);
		Hervé.executeForm(form2);
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "Trying to sign and execute 3 - RobotomyRequestForm : " << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;
	try {
		Hervé.signForm(form3);
		std::cout << "Attempt 1 : ";
		Hervé.executeForm(form3);
		std::cout << "Attempt 2 : ";
		Hervé.executeForm(form3);
		std::cout << "Attempt 3 : ";
		Hervé.executeForm(form3);
		std::cout << "Attempt 4 : ";
		Hervé.executeForm(form3);
		std::cout << "Attempt 5 : ";
		Hervé.executeForm(form3);
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Trying to execute unsigned form : " << std::endl;
	std::cout << "---------------------------------" << std::endl;
	try {
		PresidentialPardonForm form4("Marc");
		std::cout << form4;
		Hervé.executeForm(form4);
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "Trying to execute form too high for Alain : " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	try {
		PresidentialPardonForm form4("Marc");
		std::cout << form4 << Alain;
		Alain.executeForm(form4);
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
}