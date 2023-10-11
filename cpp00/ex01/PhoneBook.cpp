/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:28:53 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/11 18:18:03 by mfinette         ###   ########.fr       */
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
	while (i < 8)
	{
		this->_contactList[i].displayLine(i);
		i++;
	}
	cout << "└-----------┴----------┴----------┴----------┘" << endl;
}

void	PhoneBook::Add()
{
	static int	i = 0;
	
	this->_contactList[i % 8].setContact();
	i++;
}

void	PhoneBook::initContacts()
{
	int	i;

	i = -1;
	while (++i < 8)
		this->_contactList[i].initContact();
}