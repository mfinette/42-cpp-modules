/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:19:06 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/08 17:03:54 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern::~Intern()
{
}

AForm	*Intern::makeForm(const string &name, const string &target)
{
	string	formNames[] = {"presidential pardon", "lobotomy request", "shrubbery creation"};
	AForm	*Forms[] = {new PresidentialPardonForm(target),new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	
	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			cout << "An intern created a " << formNames[i] << std::endl;
			for (int j = 0; j < 3; j++)
			{
				if (j != i)
					delete(Forms[j]);
			}
			return (Forms[i]);
		}
	}
	throw FormNotFoundException();
}

const char*	Intern::FormNotFoundException::what() const throw()
{
	return "Form cannot be created by Intern";
}

Intern&		Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return *this;		
}