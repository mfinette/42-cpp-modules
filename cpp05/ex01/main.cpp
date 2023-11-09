/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:45:13 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/31 17:08:58 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat pawn("pawn", 2);
		cout << pawn << endl;
		pawn.increaseGrade();
		cout << pawn << endl;
		pawn.decreaseGrade();
		cout << pawn << endl;
	}
	catch (exception &e) {
		cout << e.what() << endl;
		return (1);
	}
	return 0;
}

