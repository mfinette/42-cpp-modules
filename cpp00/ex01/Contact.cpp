/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:39:04 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/11 18:13:47 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

string	Contact::Trunc(string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

string  Contact::getText(string str)
{
    string cmd;

    cout << str;
    getline(cin, cmd);
    return (cmd);
}

void    Contact::displayLine(int index)
{
    cout << "|" << std::setw(5) << index + 1 << "." << std::setw(6);
    cout << "|" << std::setw(10) << Trunc(this->_firstname);
    cout << "|" << std::setw(10) << Trunc(this->_lastname);
    cout << "|" << std::setw(10) << Trunc(this->_number);
    cout << "|" << endl;
}

void	Contact::setContact()
{
    this->_firstname = getText("First name: ");
    this->_lastname = getText("Last name: ");
    this->_nickname = getText("Nickname : ");
    this->_number = getText("Number: ");
    this->_secret = getText("Darkest secret: ");
}

void    Contact::initContact()
{
    this->_firstname = "";
    this->_lastname = "";
    this->_nickname = "";
    this->_number = "";
    this->_secret = "";
}