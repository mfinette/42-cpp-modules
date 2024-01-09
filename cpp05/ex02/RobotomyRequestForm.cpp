/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:59:35 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/09 16:42:20 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const string &target) : AForm("Robotomy Request Form", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor)
{
	if (!this->_signed)
		throw ExecUnsignedException();
	if (this->_gradetoexec < executor.getGrade())
		throw GradeTooLowException();
	this->executeConcrete();
}

void	RobotomyRequestForm::executeConcrete() const
{
	if (rand() % 2)
		cout << this->_target << " has been succesfully robotomized" << std::endl;
	else
		cout << "robotomy on " << this->_target << " failed" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	if (this != &other) {}
	return *this;
}