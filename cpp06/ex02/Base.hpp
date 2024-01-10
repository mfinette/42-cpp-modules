/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:56:30 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/10 17:11:13 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;

class Base
{
	private:

	public:
		virtual	~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif