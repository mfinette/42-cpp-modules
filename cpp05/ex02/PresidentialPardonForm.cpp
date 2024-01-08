/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:15:52 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/08 16:04:56 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const string &target) : AForm("Presidential Pardon Form", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor)
{
	if (!this->_signed)
		throw ExecUnsignedException();
	if (this->_gradetoexec < executor.getGrade())
		throw GradeTooLowException();
	this->executeConcrete();
}

void	PresidentialPardonForm::executeConcrete() const
{
	cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	if (this != &other) {}
	return *this;
}