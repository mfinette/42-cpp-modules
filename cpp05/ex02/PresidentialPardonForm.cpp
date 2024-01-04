/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:48:01 by mfinette          #+#    #+#             */
/*   Updated: 2023/11/16 10:28:15 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const string &target) : AForm("PresidentialPardonForm", 25, 5) , _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src) , _target(src.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor->getGrade() > this->getGradeToExec())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}