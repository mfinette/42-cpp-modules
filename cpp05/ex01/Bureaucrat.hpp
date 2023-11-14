/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:46:44 by mfinette          #+#    #+#             */
/*   Updated: 2023/11/14 16:19:15 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

using std::string;
using std::cout;
using std::exception;
using std::endl;
using std::ostream;

class Form;

class Bureaucrat
{
	private:
		int					_grade;
		string				_name;
		Bureaucrat();
	
	public:
		// Constructors Destructors and Operator
							Bureaucrat(string const &name, int const &grade);
							Bureaucrat(const Bureaucrat &src);
							~Bureaucrat();
		Bureaucrat 			&operator=(Bureaucrat const & rhs);

		// Getters
		int					getGrade() const;
		string				getName() const;

		// Setters
		void				increaseGrade();
		void				decreaseGrade();

		// Exception Classes
		class	GradeTooHighException : public exception
		{
			public:
				const char * what() const throw();
		};
		class	GradeTooLowException : public exception
		{
			public:
				const char * what() const throw();
		};
		
		// Methods
		void				signForm(Form &form);
};

// Ostream operator
ostream &operator<<(ostream &out, const Bureaucrat &src) ;

#endif