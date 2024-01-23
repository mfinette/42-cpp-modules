/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:56:24 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/23 12:45:42 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

vector<int>	createVector(int argc, char* argv[])
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

deque<int>	createDeque(int argc, char* argv[])
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

bool is_sorted(const std::vector<int>& vec)
{
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i - 1] > vec[i]) {
            return false;
        }
    }
    return true;
}


bool	parse_args(int argc, char** argv)
{
	if (argc < 3)
		return ft_cerr("Error: At least two arguments needed.");
	unsigned int* arr = new unsigned int[argc - 1];
	for (int i = 0; i < argc - 1; i++)
	{
		string str(argv[i + 1]);
		if (!str.size())
		{
			delete[] arr;
			return ft_cerr("Error: Empty argument detected");
		}
		if (str.find_first_not_of("0123456789") != string::npos)
		{
			delete[]arr;
			return ft_cerr("Error: Arguments must be a sequence of positive integers. Non numerical input detected");
		}
		char* endptr;
		long value = strtol(argv[i + 1], &endptr, 10);
		if (*endptr != '\0' || value > INT_MAX)
		{
			delete[]arr;	
			return ft_cerr("Error: Arguments must be a sequence of positive integers. Element over int_max detected");
		}
		arr[i] = static_cast<unsigned int>(value);
	}
	for (int i = 0; i < argc - 1; i++)
	{
		for (int j = i + 1; j < argc - 1; j++)
		{
			if (arr[i] == arr[j])
			{
				delete[] arr;
				return ft_cerr("Error: Duplicate integers.");
			}
		}
	}
	delete[] arr;
	return true;
}

int	main(int argc, char* argv[])
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
	cout << "Time to process a range of " << argc - 1 << " elements with std::vector = " << timerVec << " μs" << endl;
	cout << "Time to process a range of " << argc - 1 << " elements with std::deque = " << timerDeq << " μs" << endl;
	return 0;
}
