/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:11:14 by mfinette          #+#    #+#             */
/*   Updated: 2023/11/14 16:17:29 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

using std::string;

class Bureaucrat;

class	Form
{
	private:
		const string	_name;
		bool			_signed;
		const int		_gradetosign;
		const int		_gradetoexec;
		Form();
		
	public:
		// Constructors, destructors and operator
						Form(string const &name, const int &gradetosign, const int &gradetoexec);
						Form(const Form &src);
						~Form();
		Form			&operator=(const Form &src);

		// Getters
		string			getName() const;
		bool			getSigned() const;
		int				getGradeToSign() const;
		int				getGradeToExec() const;

		// Methods
		void			beSigned(const Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &out, Form &src);

# endif
