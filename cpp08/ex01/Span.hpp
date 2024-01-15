/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:42:39 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/15 20:06:37 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <math.h>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

class	Span
{
	private:

		unsigned int	_N;
		vector<int>		_container;


	public:
				Span(const Span &src);
				Span();
				Span(unsigned int N);
				~Span();
		
		void	printSpan();
		void	addNumber(int N);
		void	addNumbers(int N, int qt);
		int		shortestSpan();
		int		longestSpan();
		
		Span	&operator=(const Span &rhs);
};

#endif
