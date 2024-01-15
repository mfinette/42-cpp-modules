/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:45:19 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/11 16:31:07 by mfinette         ###   ########.fr       */
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

	std::vector<int>::iterator itVector = easyfind(myVector, valueToFindVector);
	// cout << "" TODOD PRINTF NOUBLIE PAS
	if (itVector != myVector.end()) {
		std::cout << "Value " << valueToFindVector << " found in the vector at position: " << std::distance(myVector.begin(), itVector) << std::endl;
	} else {
		std::cout << "Value " << valueToFindVector << " not found in the vector." << std::endl;
	}

	// Example with a different container (list)
	std::list<int> myList;
	myList.push_back(10);
	myList.push_back(20);
	myList.push_back(30);
	myList.push_back(40);
	myList.push_back(50);
	int valueToFindList = 20;

	std::list<int>::iterator itList = easyfind(myList, valueToFindList);

	if (itList != myList.end()) {
		std::cout << "Value " << valueToFindList << " found in the list." << std::endl;
	} else {
		std::cout << "Value " << valueToFindList << " not found in the list." << std::endl;
	}

	return 0;
}
