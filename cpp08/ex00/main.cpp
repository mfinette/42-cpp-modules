/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:45:19 by mfinette          #+#    #+#             */
/*   Updated: 2024/03/12 10:29:31 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	// Example with a vector
	std::vector<int> myVector;
	myVector.push_back(1);	
	myVector.push_back(2);	
	myVector.push_back(3);	
	myVector.push_back(4);	
	myVector.push_back(5);	
	int valueToFindVector = 3;

	vector<int>::iterator itVector = easyfind(myVector, valueToFindVector);
	cout << "// CHECKING IF '3' IS IN VECTOR //" << endl;
	if (itVector != myVector.end())
		cout << "Value " << valueToFindVector << " found in the vector at position: " << distance(myVector.begin(), itVector) << endl << endl;
	else
		cout << "Value " << valueToFindVector << " not found in the vector." << endl;

	// Example with a different container (list)
	list<int> myList;
	myList.push_back(10);
	myList.push_back(20);
	myList.push_back(30);
	myList.push_back(40);
	myList.push_back(50);
	int valueToFindList = 20;

	list<int>::iterator itList = easyfind(myList, valueToFindList);
	cout << "// CHECKING IF '20' IS IN LIST //" << endl;
	if (itList != myList.end())
		cout << "Value " << valueToFindList << " found in the list at position: " << distance(myList.begin(), itList) << endl;
	else
		cout << "Value " << valueToFindList << " not found in the list." << endl;

	return 0;
}
