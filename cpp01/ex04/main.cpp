/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:52:04 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/16 12:18:04 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

using std::string;
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::getline;

void replace(const string &s1, const string &s2, ifstream &inputFile, ofstream &outputFile) {
	string line;
	while (getline(inputFile, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != string::npos) {
			line.erase(pos, s1.size());
			line.insert(pos, s2);
			pos += s2.size();
		}
		outputFile << line << endl;
	}
}

int main(int argc, char **argv) {
	string filename;

	if (argc != 4)
	{
		cout << "Usage: ./sed <filename> <s1> <s2>" << endl;
		return (1);
	}
	if (static_cast<string>(argv[2]).size() == 0)
	{
		cout << "s1 cannot be empty" << endl;
		return (1);
	}
	filename = argv[1];
	ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		cout << "Input file" << endl;
		return (1);
	}

	ofstream outputFile(filename.append(".replace").c_str(), std::ios_base::out | std::ios_base::trunc);
	if (!outputFile.is_open())
	{
		inputFile.close();
		cout << "Output file" << endl;
		return 1;
	}
	replace(argv[2], argv[3], inputFile, outputFile);
	inputFile.close();
	outputFile.close();
	return 0;
}
