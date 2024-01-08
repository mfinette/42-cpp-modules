/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:12:09 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/08 16:06:21 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		void	executeConcrete() const;
				PresidentialPardonForm();
	public:
	// CONSTRUCTORS DESTRUCTORS 
				PresidentialPardonForm(const string &target);
				PresidentialPardonForm(const PresidentialPardonForm &src);
				~PresidentialPardonForm();

	// METHODS
		void	execute(const Bureaucrat &executor);
	
	// OPERATOR
		PresidentialPardonForm		&operator=(const PresidentialPardonForm& other);

};

#endif