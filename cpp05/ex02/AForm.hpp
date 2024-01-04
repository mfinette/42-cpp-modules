/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:01:38 by mfinette          #+#    #+#             */
/*   Updated: 2023/11/16 10:20:35 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

using std::string;
using std::exception;

class Bureaucrat;

class	AForm
{
	private:
		const string	_name;
		bool			_signed;
		const int		_gradetosign;
		const int		_gradetoexec;
		AForm();
		
	public:
		// Constructors, destructors and operator
						AForm(string const &name, const int &gradetosign, const int &gradetoexec);
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
		virtual void	execute(Bureaucrat const & executor) const = 0;

		// Exception
		class	FormNotSigned : public exception
		{
			public:
				const char * what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, AForm &src);

# endif
