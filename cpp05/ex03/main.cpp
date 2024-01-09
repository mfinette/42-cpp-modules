/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:41:57 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/09 16:44:36 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdlib.h>
#include "Intern.hpp"

int	main() {
	Bureaucrat Polo("Polo", 1);
	Intern Marco;
	AForm *form;
	srand(time(NULL));

	std::cout << "------------------------" << std::endl;
	std::cout << "Robotomy request form : " << std::endl;
	std::cout << "------------------------" << std::endl;
	try {
		form = Marco.makeForm("robotomy request", "Jack");
		Polo.signForm(*form);
		Polo.executeForm(*form);
		delete form;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "Shrubbbery Creation form : " << std::endl;
	std::cout << "--------------------------" << std::endl;
	try {
		form = Marco.makeForm("shrubbery creation", "Home");
		Polo.signForm(*form);
		Polo.executeForm(*form);
		delete form;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "Presidential Pardon form : " << std::endl;
	std::cout << "------------------------" << std::endl;
	try {
		form = Marco.makeForm("presidential pardon", "John");
		Polo.signForm(*form);
		Polo.executeForm(*form);
		delete form;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "Trying to create a non existing form : " << std::endl;
	std::cout << "------------------------" << std::endl;
	try {
		form = Marco.makeForm("Not a Form", "Nobody");
		Polo.signForm(*form);
		Polo.executeForm(*form);
		delete form;
	}
	catch (std::exception &e){
		std::cout << "Error : " << e.what() << std::endl;
	}
}