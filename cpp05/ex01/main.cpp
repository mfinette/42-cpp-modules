/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:45:13 by mfinette          #+#    #+#             */
/*   Updated: 2023/11/14 16:12:00 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat bur("pawn", 42);
		Form form("Dummy form", 10, 10);
		std::cout << form << std::endl;
		bur.signForm(form);

		Form form2("Dummy form", 50, 10);
		std::cout << form2 << std::endl;
		bur.signForm(form2);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return 0;
}

