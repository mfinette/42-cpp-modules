/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:34:18 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/09 20:37:19 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(){

	ScalarConverter object;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING 'Y': "  << std::endl;
	std::cout << "------------" << std::endl;
	object.convert("Y");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING 42 : "  << std::endl;
	std::cout << "------------" << std::endl;
	object.convert("42");
	std::cout << std::endl;


	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING 14.4f : " << std::endl;
	std::cout << "------------" << std::endl;
	object.convert("14.4f");
	std::cout << std::endl;


	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING 65.7 : "  << std::endl;
	std::cout << "------------" << std::endl;
	object.convert("65.7");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING a double greater then float max : " << std::endl;
	std::cout << "------------" << std::endl;
	object.convert("34028234663852885981170418348459163244925440.0000000000000000");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING nan : "  << std::endl;
	std::cout << "------------" << std::endl;
	object.convert("nan");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING nanf : "  << std::endl;
	std::cout << "------------" << std::endl;
	object.convert("nanf");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING +inff : "  << std::endl;
	std::cout << "------------" << std::endl;
	object.convert("+inff");
	std::cout << std::endl;
	
	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING -inff : "  << std::endl;
	std::cout << "------------" << std::endl;
	object.convert("-inff");
	std::cout << std::endl;

	std::cout << "------------" << std::endl;
	std::cout << "CONVERTING \"ewqewq\" : "  << std::endl;
	std::cout << "------------" << std::endl;
	object.convert("ewqeqw");
	std::cout << std::endl;
}
