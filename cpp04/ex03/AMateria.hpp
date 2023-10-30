/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:47:32 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/27 11:49:07 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

using	std::string;

class AMateria
{

	protected:
		string	_type;

	public:

		AMateria();
		AMateria(const string &type);
		AMateria(AMateria const &src);
		virtual ~AMateria();
		AMateria	&operator=(AMateria const &rhs);

		string		const 	&getType() const;
		virtual	AMateria*	clone() const = 0;
		virtual	void		use(ICharacter &target);

};

#endif
