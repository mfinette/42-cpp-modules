/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:28:53 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/10 17:02:28 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{}
PhoneBook::~PhoneBook()
{}

void	PhoneBook::printPhoneBook()
{
	int	i;

	i = 0;
    cout << "┌-----------┬------ SUMMARY ------┬----------┐" << endl;
	while (i++ < 9)
		this->_contactList[i].displayLine(i);
	cout << "└-----------┴----------┴----------┴----------┘" << endl;
}

void	PhoneBook::Add()
{
	static int	i;
	string		cmd;
	
	cout << "enter name: ";
	getline(cin, cmd);
	this->_contactList[i % 8].setContact();
}
