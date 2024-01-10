/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:07:46 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/10 16:21:17 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//////////////////// CONSTRUCTORS DESTRUCTOR OPERATOR ////////////////////

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &src)
{
	(void)src;
}

Serializer::~Serializer()
{
}


//////////////////// METHODS ////////////////////

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t serialized)
{
	return reinterpret_cast<Data*>(serialized);
}