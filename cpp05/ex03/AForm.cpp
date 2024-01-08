/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:39:50 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/08 13:18:30 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(false), _gradetosign(150), _gradetoexec(150)
{
}

AForm::AForm(string const &name, const string &target, const int &gradetosign, const int &gradetoexec) : _name(name), _target(target), _signed(false), _gradetosign(gradetosign), _gradetoexec(gradetoexec)
{
	if (gradetosign > 150 || gradetoexec > 150)
		throw(Bureaucrat::GradeTooLowException());
	else if (gradetoexec < 1 || gradetosign < 1)
		throw(Bureaucrat::GradeTooHighException());
}

AForm::AForm(const AForm &src) : _name(src.getName()), _signed(src.getSigned()), _gradetosign(src.getGradeToSign()), _gradetoexec(src.getGradeToExec())
{
}

AForm::~AForm()
{

}

AForm	&AForm::operator=(const AForm &src)
{
	if (this != &src) {
		this->_signed = src.getSigned();
	}
	return (*this);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

string	AForm::getName() const
{
	return (this->_name);
}

int		AForm::getGradeToExec() const
{
	return (this->_gradetoexec);
}

int		AForm::getGradeToSign() const
{
	return (this->_gradetosign);
}

void	AForm::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > this->getGradeToSign())
		throw Bureaucrat::GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, AForm &src) {
	out << src.getName() << "[" << src.getSigned() << "]" << std::endl;
	out << "\t - required sign grade: " << src.getGradeToSign() << std::endl;
	out << "\t - required execution grade: " << src.getGradeToExec() << std::endl;
	return out;
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return "his grade is too low";
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return "his grade is too high";
}

const char*	AForm::AlreadySignedException::what() const throw()
{
	return "cannot sign a form twice!";
}

const char*	AForm::ExecUnsignedException::what() const throw()
{
	return "cannot execute unsigned form!";
}