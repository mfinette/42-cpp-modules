/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:56:24 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/19 20:23:27 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

vector<int> createVector(int argc, char* argv[])
{
	vector<int> vec;
	for (int i = 1; i < argc; ++i)
	{
		int num;
		istringstream iss(argv[i]);
		if (iss >> num)
			vec.push_back(num);
	}
	return vec;
}

deque<int> createDeque(int argc, char* argv[])
{
    deque<int> dq;
    for (int i = 1; i < argc; ++i)
    {
        int num;
        istringstream iss(argv[i]);
        if (iss >> num)
            dq.push_back(num);
    }
    return dq;
}

bool parse_args(int argc, char **argv)
{
	unsigned int arr[argc - 1];
	if (argc < 3)
		return ft_cerr("Error: At least two arguments needed.");
	for (int i = 1; i < argc; i++)
	{
		string str(argv[i]);
		if (str.find_first_not_of("0123456789") != string::npos)
			return ft_cerr("Error: Arguments must be a sequence of positive integers.");
		if ((arr[i - 1] = strtol(argv[i], NULL, 10)) > INT_MAX)
			return ft_cerr("Error: Arguments must be a sequence of positive integers.");
	}
	for (int i = 0; i < argc - 1; i++)
	{
		for (int j = i + 1; j < argc - 1; j++)
			if (arr[i] == arr[j])
				return ft_cerr("Error: Duplicate integers.");
	}
	return true;
}

int main(int argc, char* argv[])
{
	clock_t timerVec;
	clock_t timerDeq;
	
	if (!parse_args(argc, argv))
		return 1;
	vector<int> vec = createVector(argc, argv);
	deque<int> dq = createDeque(argc, argv);
	cout << "Before: " << vec;
	timerVec = std::clock();
	fordJohnsonSort(vec);
	timerVec = std::clock() - timerVec;
	timerDeq = std::clock();
	fordJohnsonSort(dq);
	timerDeq = std::clock() - timerDeq;
	cout << "After = " << vec;
	cout << "Time to process a range of " << argc - 1 << " elements with std::vector = " << timerVec << " us" << endl;
	cout << "Time to process a range of " << argc - 1 << " elements with std::deque = " << timerDeq << " us" << endl;
	return 0;
}