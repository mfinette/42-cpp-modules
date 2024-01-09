/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:12:22 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/08 17:08:09 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern
{
	private:
	
	public:
	// CONSTRUCTORS AND DESTRUCTOR
		Intern();
		Intern(const Intern &src);
		~Intern();
	
	// OPERATOR
		Intern&	operator=(const Intern &rhs);
	
	// METHODS
		AForm*	makeForm(const string &name, const string &target);
	
	// EXCEPTION
    class FormNotFoundException: public std::exception {
		  virtual const char*	what() const throw();
	};	
};

#endif
