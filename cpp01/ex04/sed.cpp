/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:46:59 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 18:16:06 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(string infile) : _infile(infile)
{
	this->_outfile = this->_infile + ".new";
}

Sed::~Sed()
{
}

void	Sed::replace(string s1, string s2)
{
	ifstream	input_str(this->_infile.c_str());
	string		buffer;
	size_t		pos = 0;
	size_t		found;

	if (!input_str.is_open())
	{
		cout << "can't open file : " << this->_infile << "\nexiting program" << endl;
		return ;
	}
	if (!getline(input_str, buffer, '\0'))
	{
		cout << "file is empty : " << this->_infile << endl;
		input_str.close();
	}
	if (s1.length() == 0)
	{
		cout << "incorrect arguments :(" << endl;
		input_str.close();
		return ;
	}
	ofstream	output_str(this->_outfile.c_str());

	while ((found = buffer.find(s1, pos)) != string::npos)
	{
		output_str << buffer.substr(pos, found - pos); // Copy content before the match

		if (s1.length() == s2.length()) {
			// If s1 and s2 have the same length, simply append s2.
			output_str << s2;
		} else {
			// If s1 and s2 have different lengths, adjust the position accordingly.
			output_str << s2;
			pos = found + s1.length(); // Move the position past the match
		}
	}
	output_str << buffer;
	output_str.close();
	input_str.close();
	return ;
}
