/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:11:17 by mfinette          #+#    #+#             */
/*   Updated: 2023/11/14 16:09:23 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(false), _gradetosign(150), _gradetoexec(150)
{
}

AForm::AForm(string const &name, const int &gradetosign, const int &gradetoexec) : _name(name), _signed(false), _gradetosign(gradetosign), _gradetoexec(gradetoexec)
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

const	char	*AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed");
}
