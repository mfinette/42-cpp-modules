/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:40:46 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 14:14:25 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <sstream>
#include <fstream>

using std::cout;
using std::string;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::getline;

class	Sed
{
	private:
		string	_infile;
		string	_outfile;
	public:
		Sed(string infile);
		~Sed();
		void	replace(string s1, string s2);
};

#endif
