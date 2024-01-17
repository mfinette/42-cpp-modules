/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:31:09 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/17 13:46:20 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <list>
# include <map>
# include <fstream>
# include <sstream>
# include <cstdlib>
# include <ctype.h>

using std::string;
using std::map;
using std::ifstream;
using std::istringstream;
using std::cout;
using std::endl;
using std::cerr;
using std::getline;
using std::ws;

// NO ERRORS //
#define CORRECT_INPUT 4
#define NO_ERRORS 0
// FORMAT ERRORS //
#define INPUT_ERROR 2
#define DATE_ERROR 5
#define NUMBER_ERROR 6
// DATE ERROR //
#define DATE_INVALID 7
// NUMBER ERRORS //
#define NEGATIVE_VALUE 1
#define NUMBER_TOO_BIG 3

class BitcoinExchange
{
	private:
			map<string, double>	_csv;
		
	public:
		//CONSTRUCTORS DESTRUCTORS OPERATOR
		BitcoinExchange		&operator=(BitcoinExchange const &src);
							BitcoinExchange();
							BitcoinExchange(BitcoinExchange const &src);
							~BitcoinExchange();
		//METHODS
		void				initMap(ifstream &csvFile);
		void				printCSV();	
		void				processInfo(ifstream &inputFile);
		void				printLine(string &line);
		
};

int		parseLine(string &line);
void	chooseError(int status, string line);


#endif