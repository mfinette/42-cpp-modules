/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:47:36 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/27 11:15:58 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria( const AMateria & src ) : this->_type(src)._type
{
}

Amateria::Amateria(const string &type) : this->_type(type)
{
}

AMateria::~AMateria()
{
}

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

void	Amateria::use(ICharacter &target)
{
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}

const	string	&Amateria::getType()
{
	return (this->_type);
}
