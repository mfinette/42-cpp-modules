/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:28:53 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/14 16:14:59 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{}
PhoneBook::~PhoneBook()
{}

void	PhoneBook::printPhoneBook()
{
	int		i;

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
	this->_contactList[i % 8].setIndex(i % 8);
	i++;
}

void	PhoneBook::initContacts()
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		this->_contactList[i].initContact();
		this->_contactList[i].setIndex(INIT);
	}
}

void	PhoneBook::Search()
{
	string	cmd = "";
	int		index = 0;
	bool	isNumeric = true;
	
	this->printPhoneBook();
	cout << "enter index: ";
	getline(cin, cmd);
	isNumeric = this->_contactList[0].onlyDigits(cmd);
	std::istringstream(cmd) >> index;
	if (!isNumeric || cmd.empty() || index > 8 || index < 1)
	{
		cout << "incorrect index" << endl;
		return ;
	}
	if (this->_contactList[index - 1].checkDeclaration() == false)
		cout << "Contact not set" << endl;
	else
		this->_contactList[index - 1].displayContact();
}