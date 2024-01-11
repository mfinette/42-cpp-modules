/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:02:48 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/11 11:27:31 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

template <typename T, typename F>
void	iter(T *array, size_t length, F func)
{
	size_t i;
	for (i = 0; i < length ; i++)
		func(array[i]);
}

#endif