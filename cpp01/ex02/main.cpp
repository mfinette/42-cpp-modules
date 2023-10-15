/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:50:40 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 11:05:16 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>

using	std::string;
using	std::cout;
using	std::endl;

int	main(void)
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringRef = str;

	cout << "----------ADDRESSES----------" << endl;
	cout << "string address = " << &str << endl;
	cout << "pointer address = " << stringPTR << endl;
	cout << "reference address = " << &stringRef << endl;
	cout << endl << "----------VALUES----------" << endl;
	cout << "string value = " << str << endl;
	cout << "pointer value = " << *stringPTR << endl;
	cout << "reference value = " << stringRef << endl;
}