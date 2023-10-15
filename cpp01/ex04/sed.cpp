/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:46:59 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 14:30:05 by mfinette         ###   ########.fr       */
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
	size_t		i;
	
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
	ofstream	output_str(this->_outfile.c_str());
	while ((i = buffer.find(s1)) != string::npos)
	{
		buffer.erase(i, s1.length());
		buffer.insert(i, s2);
	}
	output_str << buffer;
	output_str.close();
	input_str.close();
	return ;
}
