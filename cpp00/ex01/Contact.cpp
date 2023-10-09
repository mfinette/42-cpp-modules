/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:39:04 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/09 16:48:42 by mfinette         ###   ########.fr       */
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

void    Contact::displayLine(int index) {
    cout << "|" << std::setw(5) << index << "." << std::setw(6);
    cout << "|" << std::setw(10) << Trunc("maxime");
    cout << "|" << std::setw(10) << Trunc("finette");
    cout << "|" << std::setw(10) << Trunc("crepe master");
    cout << "|" << endl;
}
