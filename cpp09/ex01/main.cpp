/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:24:38 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/17 12:49:33 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	ft_cerror(string str)
{
	cerr << str << endl;
	return (1);
}

int	main(int argc, char **argv)
{
	RPN	rpn;

	if (argc != 2)
		return	ft_cerror("Wrong argument number\nCorrect usage: ./rpn \"operation\"");
	if (!rpn.checkExpression(argv[1]))
		return ft_cerror("Expression is not in the correct format");
	switch (rpn.solveExpression(argv[1]))
	{
		case DIVIDE_BY_ZERO :
			return (ft_cerror("Error: Solving expression implies dividing by 0"));
			break;
		case UNSOLVABLE :
			return (ft_cerror("Error: Expression unsolvable"));
			break;
		case SOLVED :
			return (0);
			break;
	}
	return (0);
}
