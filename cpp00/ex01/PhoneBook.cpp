/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:28:53 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/09 16:54:33 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{}
PhoneBook::~PhoneBook()
{}

void	printPhoneBook()
{
	int	i;
	
	i = 0;
    cout << "┌-----------┬------ SUMMARY ------┬----------┐" << endl;
	while (i++ < 9)
		this->_contactList[i].displayLine(i);
	cout << "└-----------┴----------┴----------┴----------┘" << endl;
}
