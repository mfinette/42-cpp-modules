/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:44:50 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/11 10:59:18 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

using std::cout;
using std::string;
using std::endl;

template <typename Tswap>
void	swap(Tswap &a, Tswap &b)
{
	Tswap temp = a;
	a = b;
	b = temp;
}
template <typename Tmin>
Tmin	&min(Tmin &a, Tmin &b)
{
	if (b > a)
		return a;
	return b;
}

template <typename Tmax>
Tmax	&max(Tmax &a, Tmax &b)
{
	if (b >= a)
		return b;
	return a;
}

#endif