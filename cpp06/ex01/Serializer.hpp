/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:03:22 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/10 16:29:48 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <inttypes.h>

using std::cout;
using std::endl;

struct	Data
{
	char	a;
	int		b;
	float	c;
	double	d;
};

class	Serializer
{
	private:

	public:
	// CONSTRUCTORS DESTRUCTOR
							Serializer();
							Serializer(const Serializer &src);
							~Serializer();

	// METHODS
		static uintptr_t	serialize(Data* ptr);
		static Data* 		deserialize(uintptr_t serialized);
	
	// OPERATOR
		Serializer			&operator=(const Serializer &rhs);
};


#endif