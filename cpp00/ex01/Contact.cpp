/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:39:04 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/14 16:53:59 by mfinette         ###   ########.fr       */
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
    if (cin.eof())
    {
        cout << endl << "CTRL + D detected : exiting PhoneBook" << endl;
        exit(1);
    }
    if (cmd.length() == 0)
        return (this->getText(str));
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
    bool    isNumeric = false;
    
    this->_firstname = getText("First name: ");
    this->_lastname = getText("Last name: ");    
    this->_nickname = getText("Nickname : ");
    while (isNumeric == false)
    {
        this->_number = getText("Number: ");
        if (this->onlyDigits(this->_number) == true)
            isNumeric = true;
    }
    this->_secret = getText("Darkest secret: ");
}

void    Contact::setIndex(int n)
{
    if (n == INIT)
        this->id = -1;
    else
        this->id = n;
}

void    Contact::initContact()
{
    this->_firstname = "";
    this->_lastname = "";
    this->_nickname = "";
    this->_number = "";
    this->_secret = "";
}

bool    Contact::checkDeclaration()
{
    if (this->id == INIT)
        return (false);
    return (true);
}

bool    Contact::onlyDigits(string str)
{
    bool    isNumeric = true;
    size_t  i = 0;

    for (i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
        {
            isNumeric = false;
            break;
        }
    }
    return (isNumeric);
}

void    Contact::displayContact()
{
    cout << "CONTACT [" << this->id + 1 << "]" << endl;
    cout << "First name = " << this->_firstname << endl;
    cout << "Last name = " << this->_lastname << endl;
    cout << "Nick name = " << this->_nickname << endl;
    cout << "Phone Number = " << this->_number << endl;
    cout << "Darkest Secret = " << this->_secret << endl;
}