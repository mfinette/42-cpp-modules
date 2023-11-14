/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:11:17 by mfinette          #+#    #+#             */
/*   Updated: 2023/11/14 16:09:23 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _gradetosign(150), _gradetoexec(150)
{
}

Form::Form(string const &name, const int &gradetosign, const int &gradetoexec) : _name(name), _signed(false), _gradetosign(gradetosign), _gradetoexec(gradetoexec)
{
	if (gradetosign > 150 || gradetoexec > 150)
		throw(Bureaucrat::GradeTooLowException());
	else if (gradetoexec < 1 || gradetosign < 1)
		throw(Bureaucrat::GradeTooHighException());
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSigned()), _gradetosign(src.getGradeToSign()), _gradetoexec(src.getGradeToExec())
{
}

Form::~Form()
{

}

Form	&Form::operator=(const Form &src)
{
	if (this != &src) {
		this->_signed = src.getSigned();
	}
	return (*this);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

string	Form::getName() const
{
	return (this->_name);
}

int		Form::getGradeToExec() const
{
	return (this->_gradetoexec);
}

int		Form::getGradeToSign() const
{
	return (this->_gradetosign);
}

void	Form::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > this->getGradeToSign())
		throw Bureaucrat::GradeTooLowException();
	this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, Form &src) {
	out << src.getName() << "[" << src.getSigned() << "]" << std::endl;
	out << "\t - required sign grade: " << src.getGradeToSign() << std::endl;
	out << "\t - required execution grade: " << src.getGradeToExec() << std::endl;
	return out;
}
