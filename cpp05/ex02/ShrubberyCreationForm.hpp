/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 12:33:42 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/08 13:51:22 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		void	executeConcrete() const;
				ShrubberyCreationForm();
	public:
	// CONSTRUCTORS DESTRUCTORS
	
				ShrubberyCreationForm(const string &target);
				ShrubberyCreationForm(const ShrubberyCreationForm &src);
				~ShrubberyCreationForm();

	// METHODS
		void	execute(const Bureaucrat &exeutor);
		
};

#endif
