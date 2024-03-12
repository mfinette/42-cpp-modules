/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:15:20 by mfinette          #+#    #+#             */
/*   Updated: 2024/03/12 10:48:48 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int	main()
{
	{
		Span sp = Span(5);
		cout << "// CREATING CONTAINER WITH 5 NUMBERS //" << endl;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.printSpan();
		cout << endl << "// ADDING ONE MORE ELEMENT TO TRY EXCEPTION HANDLING //" << endl;
		try
		{
			sp.addNumber(9);
		}
		catch (std::exception &e)
		{
			cout << e.what() << endl;
		}
		cout << endl << "shortest span = " << sp.shortestSpan() << endl << "longest span = " << sp.longestSpan() << endl << endl;
	}
	{
		Span	sp = Span(10000);
		cout << "// CREATING CONTAINER WITH 10000 NUMBERS AND FILLING IT WITH \"4\" //" << endl;
		sp.addNumbers(4, 10000);
		// sp.printSpan();
		cout << endl << "// ADDING ONE MORE ELEMENT TO TRY EXCEPTION HANDLING //" << endl;
		try
		{
			sp.addNumber(4);
		}
		catch (std::exception &e)
		{
			cout << e.what() << endl;
		}
		cout << endl << "shortest span = " << sp.shortestSpan() << endl << "longest span = " << sp.longestSpan() << endl << endl;
	}
}
