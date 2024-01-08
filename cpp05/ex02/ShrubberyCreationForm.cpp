/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:33:39 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/08 16:04:27 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

using std::fstream;

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const string &target) : AForm("Shruberry Creation Form", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor)
{
	if (!this->_signed)
		throw ExecUnsignedException();
	if (this->_gradetoexec < executor.getGrade())
		throw GradeTooLowException();
	this->executeConcrete();
}

void	ShrubberyCreationForm::executeConcrete() const
{
	fstream	fs;

	fs.open((this->_target + "_shrubbery").c_str(), fstream::out | fstream::trunc);

	if (!fs.good())
		std::cerr << "Error while opening Shrubbery target file" << std::endl;

	fs <<
	"						         # #### ####\n"
    "                            ### \\/#|### |/####\n"
    "                           ##\\/#/ \\||/##/_/##/_#\n"
    "                         ###  \\/###|/ \\/ # ###\n"
    "                       ##_\\_#\\_\\## | #/###_/_####\n"
    "                      ## #### # \\ #| /  #### ##/##\n"
    "                       __#_--###`  |{,###---###-~\n"
    "                                 \\ }{\n"
    "                                  }}{\n"
    "                                  }}{\n"
    "                                  {{}\n"
    "                            , -=-~{ .-^- _\n"
    "                                  `}\n ";
	fs.close();	
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	if (this != &other) {}
	return *this;
}