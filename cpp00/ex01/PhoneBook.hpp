/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:37:20 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/14 13:55:54 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include <sstream>

class	PhoneBook
{
	private:
		Contact _contactList[8];

	public:
		PhoneBook();
		~PhoneBook();
		void	printPhoneBook();
		void	initContacts();
		void	Add();
		void	Search();
};

#endif