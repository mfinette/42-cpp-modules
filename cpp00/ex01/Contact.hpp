/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:37:03 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/11 18:01:10 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

class Contact
{
	private:
		// int		id;
		string	_firstname;
		string	_lastname;
		string	_nickname;
		string	_number;
		string	_secret;
	public:
		Contact();
		~Contact();
		string	Trunc(string str);
		string	getText(string str);
		void	displayLine(int index);
		void	setContact();
		void	initContact();
};

#endif