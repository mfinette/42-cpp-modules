/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:20:04 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/10 16:32:37 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data		data;
	Data		*serialized;
	uintptr_t	ptr;
	
	data.a = 'a';
	data.b = 0;
	data.c = 0.0f;
	data.d = 0.0;

	cout << "//////////////////// BEFORE SERIALIZING ////////////////////" << endl << endl;
	cout << "data.a = " << data.a << endl;
	cout << "data.b = " << data.b << endl;
	cout << "data.c = " << data.c << endl;
	cout << "data.d = " << data.d << endl << endl;
	
	ptr = Serializer::serialize(&data);

	cout << "//////////////////// AFTER SERIALIZING ////////////////////" << endl << endl;
	cout << "ptr = " << ptr << endl << endl;

	serialized = Serializer::deserialize(ptr);

	cout << "//////////////////// AFTER DESERIALIZING ////////////////////" << endl << endl;
	cout << "data.a = " << serialized->a << endl;
	cout << "data.b = " << serialized->b << endl;
	cout << "data.c = " << serialized->c << endl;
	cout << "data.d = " << serialized->d << endl << endl;
}