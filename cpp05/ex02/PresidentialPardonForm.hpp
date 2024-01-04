/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:47:58 by mfinette          #+#    #+#             */
/*   Updated: 2023/11/16 10:16:53 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
				string	_target;
				PresidentialPardonForm();
	
	public:
	// CONSTRUCTORS DESTRUCTORS OPERATORS
				PresidentialPardonForm(const string &target);
				PresidentialPardonForm(const PresidentialPardonForm &src);
				~PresidentialPardonForm();
	// METHOD
		void	execute(Bureaucrat const &executor) const;
}

#endif