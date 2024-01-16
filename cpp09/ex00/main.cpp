/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:39:40 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/16 18:12:54 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	ft_cerr(string str)
{
	cerr << str << endl;
	return 1;
}


int	main(int argc, char **argv)
{
	BitcoinExchange	Data;
	
	if (argc != 2)
		return ft_cerr("Argument error\nUsage: ./btc \"filename\"");
	ifstream	inputFile(argv[1], ifstream::in);
	ifstream	csvFile("data.csv", ifstream::in);
	if (!inputFile.is_open() || !csvFile.is_open())
		return ft_cerr("Problem opening files");
	Data.initMap(csvFile);
	// Data.printCSV();
	Data.processInfo(inputFile);
}
