/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:46:42 by mfinette          #+#    #+#             */
/*   Updated: 2023/11/14 16:15:48 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
//Constructors  Destructors and Operator

Bureaucrat::Bureaucrat() : _grade(1), _name("Default")  
{
	cout << "Default constructor called" << endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _grade(src._grade), _name(src._name)  
{
	cout << "Copy constructor called for : "<< this->_name << " (grade = " << this->_grade << ")" << endl;
}
Bureaucrat::Bureaucrat(string const &name, int const &grade) : _grade(grade), _name(name) 
{
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::~Bureaucrat()
{
	cout << "Bureaucrat destructor called" << endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

// Getters 
int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

string	Bureaucrat::getName() const
{
	return (this->_name);
}

// Setters

void	Bureaucrat::decreaseGrade()
{
	if (this->_grade > 149)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::increaseGrade()
{
	if (this->_grade < 2)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

// Methods

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << this->getName() << " couldn't sign " << form.getName() <<
			" because: " << e.what() << std::endl;
	}
}

// Exceptions
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too Low");
}

// Ostream operator
ostream &operator<<(ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ": grade [" << src.getGrade() << "]";
	return (out);
}
