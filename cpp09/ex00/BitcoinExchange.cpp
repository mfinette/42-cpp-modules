/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:39:45 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/17 11:17:31 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

void	BitcoinExchange::initMap(ifstream &csvFile)
{
	string	tmp;

	while (getline(csvFile, tmp))
	{
		istringstream iss(tmp);
		string date;
		double price;

		if (getline(iss, date, ',') && iss >> price)
			this->_csv[date] = price;
	}
}

void BitcoinExchange::printCSV()
{
	cout << "Printing _csv map:" << endl;
	for (map<string, double>::const_iterator it = this->_csv.begin(); it != this->_csv.end(); ++it)
	{
		cout << "Date: " << it->first << ", Price: " << it->second << endl;
	}
	cout << "For DATE 2022-02-26, price = " << this->_csv["2022-02-26"] << endl;
}

void BitcoinExchange::processInfo(ifstream &inputFile)
{
	string	expectedHeader = "date | value";
	string	firstLine;
	string	line;
	int		status;

	if (getline(inputFile, firstLine))
	{
		if (firstLine != expectedHeader)
		{
			cerr << "Error: Invalid header in the input file. Expected: \"date | value\"" << endl;
			return;
		}
	}
	else
	{
		cerr << "Error reading the first line from the input file." << endl;
		return;
	}
	while (getline(inputFile, line))
	{
		status = parseLine(line);
		if (status == NO_ERRORS)
			printLine(line);
		else
			chooseError(status, line);
	}
}

void	BitcoinExchange::printLine(string &line)
{
	istringstream iss(line);
	string datePart, valuePart;
	char delimiter;
	double	result;

	iss >> ws >> datePart >> ws >> delimiter >> ws >> valuePart;
	map<string, double>::iterator it = _csv.lower_bound(datePart);
	if (it == _csv.begin() || (it != _csv.end() && it->first != datePart))
		--it;
	if (it != _csv.end())
		result = strtod(valuePart.c_str(), NULL) * it->second;
	else
	{
		it--;
		result = strtod(valuePart.c_str(), NULL) * (it->second);
	}
	cout << datePart << " => " << valuePart << " = " << result << endl;
}

void	chooseError(int status, string line)
{
	istringstream iss(line);
	string datePart, valuePart;
	char delimiter;

	iss >> datePart >> std::ws >> delimiter >> std::ws >> valuePart;
	switch(status)
	{
		case INPUT_ERROR :
			cout << "Error: Input Format: " << line;
			break;
		case DATE_ERROR :
			cout << "Error: Date Format: " << datePart;
			break;
		case NUMBER_ERROR :
			cout << "Error: Number Format: " << valuePart;
			break;
		case DATE_INVALID :
			cout << "Error: Date not valid: " << datePart;
			break;
		case NEGATIVE_VALUE :
			cout << "Error: Negative value detected: " << valuePart;
			break;
		case NUMBER_TOO_BIG :
			cout << "Error: Number over 1000 detected: " << valuePart;
			break;
	}
	cout << endl;
}

bool isValidDateFormat(const string &date)
{
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return false;
	for (int i = 0; i < 10; ++i)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
			return false;
	}

	return true;
}

bool isValidDoubleFormat(const string &value)
{
	char *endptr;
	strtod(value.c_str(), &endptr);
	return *endptr == '\0';
}

int	isValidDoubleValue(const string &value)
{
	double tmp = strtod(value.c_str(), NULL);
	if (tmp < 0)
		return (NEGATIVE_VALUE);
	if (tmp > 1000)
		return (NUMBER_TOO_BIG);
	else
		return (NO_ERRORS);
}

bool isValidDateValue(const string& date)
{
	if (date.length() != 10)
		return false;
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());
	if (year < 2009)
		return false;
	if (month < 1 || month > 12)
		return false;
	bool isValidDay = false;
	switch (month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			isValidDay = (day >= 1 && day <= 31);
			break;
		case 4: case 6: case 9: case 11:
			isValidDay = (day >= 1 && day <= 30);
			break;
		case 2:
			isValidDay = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? (day >= 1 && day <= 29) : (day >= 1 && day <= 28);
			break;
	}
	if (!isValidDay)
		return false;
	return true;
}

int	checkStatus(string date, string value)
{
	if (!isValidDateFormat(date))
		return (DATE_ERROR);
	else if (!isValidDoubleFormat(value))
		return (NUMBER_ERROR);
	else if (!isValidDateValue(date))
		return (DATE_INVALID);
	else
		return (isValidDoubleValue(value));
}

int parseLine(string &line)
{
	istringstream iss(line);
	string datePart, valuePart;
	char delimiter;

	if (iss >> ws >> datePart >> ws >> delimiter >> ws >> valuePart)
	{
		size_t pos = line.find(delimiter);
		if (isspace(line[pos + 2]) || isspace(line[pos -2]) || !isspace(line[pos + 1]) || !isspace(line[pos - 1]))
			return INPUT_ERROR;
		if (delimiter == '|' && iss.eof() && line.find(datePart) == 0)
			return (checkStatus(datePart, valuePart));
	}
	return (INPUT_ERROR);
}
