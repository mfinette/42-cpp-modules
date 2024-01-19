/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:56:17 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/18 14:40:19 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int	ft_cerr(string error)
{
	cerr << error << endl;
	return 1;
}

void printVector(const vector<int>& vec)
{
  for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
      cout << *it << ' ';
  cout << endl;
}

void printDeque(const deque<int>& dq)
{
  for (deque<int>::const_iterator it = dq.begin(); it != dq.end(); ++it)
      cout << *it << ' ';
  cout << endl;
}

void	printPairs(const vector <pair<int, int> > &pairs)
{
	for (size_t i = 0; i < pairs.size(); i++)
		cout << "(" << pairs[i].first << ", " << pairs[i].second << ") ";
	cout << endl;
}

ostream	&operator<<(ostream &out, const vector <pair<int, int> > &pairs)
{
	for (size_t i = 0; i < pairs.size(); i++)
		out << "(" << pairs[i].first << ", " << pairs[i].second << ") ";
	out << endl;
	return out;
}

ostream	&operator<<(ostream &out, const vector <int> &vec)
{
	for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
		out << *it << ' ';
	out << endl;
	return out;
}