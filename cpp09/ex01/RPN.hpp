/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:22:58 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/17 13:41:10 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <sstream>
# include <string>
# include <cstdlib>

using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::stack;
using std::istringstream;

#define DIVIDE_BY_ZERO 0
#define UNSOLVABLE 1
#define SOLVED 2


class	RPN
{
	public:
				RPN();
				RPN(RPN const &src);
				~RPN();
	RPN			&operator=(RPN const &src);
	bool		checkExpression(string expression);
	int			solveExpression(string expression);
};

#endif
