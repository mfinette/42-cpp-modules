/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:56:24 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/18 17:45:29 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


// void fordJohnsonSort(std::vector<int>& arr)
// {
//    int CHUNK_SIZE = 10; // Change this value based on your needs
//    std::vector<int> temp(arr.size());
//    int n = arr.size();

//    // Insertion sort for each chunk
//    for (int i = 0; i < n; i += CHUNK_SIZE)
//        std::sort(arr.begin() + i, std::min(arr.begin() + i + CHUNK_SIZE, arr.end()));
//    // Merge sorted chunks
//    while (CHUNK_SIZE < n) {
//        for (int i = 0; i < n; i += CHUNK_SIZE * 2)
// 	   {
//            std::merge(arr.begin() + i, std::min(arr.begin() + i + CHUNK_SIZE, arr.end()),
//                      std::min(arr.begin() + i + CHUNK_SIZE, arr.end()),
//                      std::min(arr.begin() + i + 2 * CHUNK_SIZE, arr.end()),
//                      temp.begin() + i);
//        }
//        arr.swap(temp);
//        CHUNK_SIZE *= 2;
//    }
// }

vector<pair<int, int> >	partition(vector<int>& arr)
{
	vector<pair<int, int> >	pairs;
	cout << "//ENTERING PARTITION WITH " << arr;
	for (size_t i = 0; i < arr.size(); i += 2)
	{
		if (i + 1 < arr.size())
			pairs.push_back(make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(make_pair(arr[i], -1));
	}
	cout << "//EXITING PARTITION RETURNING " << pairs;
	return pairs;
}

vector<int>	recursiveSort(vector<pair<int, int> > pairs)
{
	vector<int> result;
	cout << "//ENTERING RECURSIVE SORT WITH " << pairs;
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		if (pairs[i].first > pairs[i].second)
			result.push_back(pairs[i].first);
		else
			result.push_back(pairs[i].second);
	}
	if (result.size() > 1)
		return recursiveSort(partition(result));
	else
	{
		cout << "//EXITING RECURSIVE SORT WITH " << result;
		return result;
	}
}

void insertRemainingElements(vector<int>& sortedSequence, vector<int>& remainingElements)
{
	cout << "//ENTERING INSERT WITH :\n REMAINING ELEMENTS = " << remainingElements << "SORTED SEQUENCE = " << sortedSequence << endl; 
	for (size_t i = 0; i < remainingElements.size(); ++i)
	{
		vector<int>::iterator it;
		for (it = sortedSequence.begin(); it != sortedSequence.end(); ++it)
		{
			if (*it > remainingElements[i])
				break;
		}
		sortedSequence.insert(it, remainingElements[i]);
	}
	cout << "//EXITING INSERT WITH :\nREMAINING ELEMENTS = " << remainingElements << "SORTED SEQUENCE = " << sortedSequence << endl << endl; 
}

void fordJohnsonSort(vector<int>& arr)
{
	//	Partition the array into pairs
	// cout << "/////////// ENTERING PARTITION FUNCTION WITH VECTOR = " << arr << endl;
	// vector<pair<int, int> > pairs = partition(arr);
	// cout << "/////////// PAIRS SET = " << pairs << endl << endl;
	// 	// Recursively sort the larger elements from each pair
	// cout << "/////////// ENTERING RECURSIVE SORT FUNCTION WITH PAIRS = " << pairs << endl;
	// vector<int> sortedSequence = recursiveSort(pairs);
	// cout << "\n/////////// EXITING RECURSIVE FUNCTION WITH:\nSORTEDSEQUENCE = " << sortedSequence << "PAIRS = " << pairs << endl << endl;
		// Insert at the start of the sorted sequence the element that was paired with the first and smallest element of the sorted sequence
	// sortedSequence.insert(sortedSequence.begin(), pairs[0].first);
	//	Insert the remaining elements into the sorted sequence one at a time, with a specially chosen insertion ordering
	vector<int>	sortedSequence;
	insertRemainingElements(sortedSequence, arr);
	arr = sortedSequence;
}

int main(int argc, char* argv[])
{
	int num;

	if (argc != 2)
		return ft_cerr("Usage: ./PmergeMe \"integer sequence\"");
	std::string str = argv[1];
	std::istringstream iss(str);
	std::vector<int> vec;
	while (iss >> num)
		vec.push_back(num);
	std::deque<int> dq;
	iss.clear();
	iss.seekg(0, std::ios::beg);
	while (iss >> num)
		dq.push_back(num);
	fordJohnsonSort(vec);
	cout << endl << "final result = " << vec;
	return 0;
}
