/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:35:54 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/11 18:16:15 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook PhoneBook;
	string	cmd;
	
	PhoneBook.initContacts();
	while(cmd.compare("EXIT") != 0)
	{
		cout << "wsh donne une cmd: ";
		getline(cin, cmd);
		if(cin.eof())
		{
			return (cout << "\naplus c la fin\n"), 1;
		}
		if (cmd.compare("ADD") == 0)
			PhoneBook.Add();
		else if (cmd.compare("SEARCH") == 0)
			PhoneBook.printPhoneBook();
		else
			cout <<"ca veux rien dire : " << cmd << endl;
	}
}
