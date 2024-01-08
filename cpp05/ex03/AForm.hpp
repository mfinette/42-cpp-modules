/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:39:41 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/08 17:03:14 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

using std::string;

class Bureaucrat;

class	AForm
{
	protected:
		const string	_name;
		const string	_target;
		bool			_signed;
		const int		_gradetosign;
		const int		_gradetoexec;
						AForm();
		
	public:
		// Constructors, destructors and operator
						AForm(string const &name, const string &target, const int &gradetosign, const int &gradetoexec);
						AForm(const AForm &src);
		virtual			~AForm();
		AForm			&operator=(const AForm &src);

		// Getters
		string			getName() const;
		bool			getSigned() const;
		int				getGradeToSign() const;
		int				getGradeToExec() const;

		// Methods
		void			beSigned(const Bureaucrat &b);
		virtual	void	execute(const Bureaucrat &executor) = 0;

		// Exceptions
		class GradeTooLowException: public std::exception {
			virtual const char*	what() const throw();
		};

		class GradeTooHighException: public std::exception {
			virtual const char*	what() const throw();
		};

		class AlreadySignedException: public std::exception {
			virtual const char*	what() const throw();
		};

		class ExecUnsignedException: public std::exception {
			virtual const char*	what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, AForm &src);

# endif
