/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:37:03 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/14 16:46:37 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

#define INIT -1
#define NUMBER 1

class Contact
{
	private:
		int		id;
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
		bool	checkDeclaration();
		void	displayLine(int index);
		void	setContact();
		void	initContact();
		void	setIndex(int n);
		void	displayContact();
		bool	onlyDigits(string str);
};

#endif