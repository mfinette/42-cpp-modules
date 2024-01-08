/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:54:20 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/08 16:06:13 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		void	executeConcrete() const;
				RobotomyRequestForm();
	public:
	// CONSTRUCTORS DESTRUCTORS
	
				RobotomyRequestForm(const string &target);
				RobotomyRequestForm(const RobotomyRequestForm &src);
				~RobotomyRequestForm();

	// METHODS
		void	execute(const Bureaucrat &executor);

	// OPERATOR
		RobotomyRequestForm		&operator=(const RobotomyRequestForm& other);

};

#endif