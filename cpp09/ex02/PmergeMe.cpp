/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:56:17 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/19 20:16:43 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/////////////////////////////////// UTILS ///////////////////////////////////

bool	ft_cerr(string error)
{
	cerr << error << endl;
	return false;
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

ostream	&operator<<(ostream &out, const deque <int> &dq)
{
	for (deque<int>::const_iterator it = dq.begin(); it != dq.end(); ++it)
		out << *it << ' ';
	out << endl;
	return out;	
}


/////////////////////////////////// VECTOR ALGO ///////////////////////////////////

static bool compareDescending(const pair<int, int>& a, const pair<int, int>& b)
{
	return max(a.first, a.second) < max(b.first, b.second);
}

static void sortVectorDescending(vector<pair<int, int> >& vec)
{
	sort(vec.begin(), vec.end(), compareDescending);
}

static vector<pair<int, int> >	partition(vector<int>& arr)
{
	vector<pair<int, int> >	pairs;
	for (size_t i = 0; i < arr.size(); i += 2)
	{
		if (i + 1 < arr.size())
			pairs.push_back(make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(make_pair(arr[i], -1));
	}
	sortVectorDescending(pairs);
	return pairs;
}

static vector<int> getSmallValues(const vector<pair<int, int> >& pairs)
	{
	vector<int> smallValues;

	for (size_t i = 0; i < pairs.size(); ++i)
		smallValues.push_back(min(pairs[i].first, pairs[i].second));
	return smallValues;
}

static vector<int> getBigValues(const vector<pair<int, int> >& pairs)
{
	vector<int> bigValues;

	for (size_t i = 0; i < pairs.size(); ++i)
		bigValues.push_back(max(pairs[i].first, pairs[i].second));
	return bigValues;
}

static void	swapFirstElement(vector<int> &vec1, vector<int> &vec2)
{
	vec1.insert(vec1.begin(), vec2[0]);
	vec2.erase(vec2.begin());
}

static void binaryInsert(vector<int>& sortedVec, int value)
{
	vector<int>::iterator insertionPos = sortedVec.begin();
	while (insertionPos != sortedVec.end() && *insertionPos < value)
		++insertionPos;
	if (insertionPos == sortedVec.end() || *insertionPos != value)
		sortedVec.insert(insertionPos, value);
}

static void fordJohnsonInsertion(vector<int>& pairBiggest, vector<int>& pairSmallest)
{
	vector<int> uninsertedElements;
	uninsertedElements.insert(uninsertedElements.end(), pairSmallest.begin(), pairSmallest.end());
	for (size_t i = 0; i < uninsertedElements.size(); ++i)
		binaryInsert(pairBiggest, uninsertedElements[i]);
	if (pairBiggest.front() == -1)
		pairBiggest.erase(pairBiggest.begin());
}

void fordJohnsonSort(vector<int>& arr)
{
	vector<int>	sortedSequence;
	vector<int>	pairSmallest;
	vector<int>	pairBiggest;
	
	vector<pair<int, int> > pairs = partition(arr);
	pairSmallest = getSmallValues(pairs);
	pairBiggest = getBigValues(pairs);
	swapFirstElement(pairBiggest, pairSmallest);
	fordJohnsonInsertion(pairBiggest, pairSmallest);
	arr = pairBiggest;
}

////////////////////////////////// DEQUE //////////////////////////////////

void sortDequeDescending(deque<pair<int, int> >& deq)
{
	sort(deq.begin(), deq.end(), compareDescending);
}
deque<pair<int, int> > partition(deque<int>& arr)
{
	deque<pair<int, int> > pairs;
	for (deque<int>::iterator it = arr.begin(); it != arr.end(); )
	{
		int firstValue = *it;
		++it;
		int secondValue = (it != arr.end()) ? *it : -1;
		pairs.push_back(make_pair(firstValue, secondValue));
		if (it != arr.end())
			++it;
	}
	sortDequeDescending(pairs);
	return pairs;
}

deque<int> getSmallValues(const deque<pair<int, int> >& pairs)
{
	deque<int> smallValues;

	for (deque<pair<int, int> >::const_iterator it = pairs.begin(); it != pairs.end(); ++it)
		smallValues.push_back(min(it->first, it->second));
	return smallValues;
}

deque<int> getBigValues(const deque<pair<int, int> >& pairs)
{
	deque<int> bigValues;

	for (deque<pair<int, int> >::const_iterator it = pairs.begin(); it != pairs.end(); ++it)
		bigValues.push_back(max(it->first, it->second));
	return bigValues;
}

void swapFirstElement(deque<int>& deq1, deque<int>& deq2)
{
	deq1.push_front(deq2.front());
	deq2.pop_front();
}

void binaryInsert(deque<int>& sortedDeque, int value)
{
	deque<int>::iterator insertionPos = sortedDeque.begin();
	while (insertionPos != sortedDeque.end() && *insertionPos < value)
		++insertionPos;
	if (insertionPos == sortedDeque.end() || *insertionPos != value)
		sortedDeque.insert(insertionPos, value);
}

void fordJohnsonInsertion(deque<int>& pairBiggest, deque<int>& pairSmallest)
{
	deque<int> uninsertedElements;
	uninsertedElements.insert(uninsertedElements.end(), pairSmallest.begin(), pairSmallest.end());
	for (deque<int>::iterator it = uninsertedElements.begin(); it != uninsertedElements.end(); ++it)
		binaryInsert(pairBiggest, *it);
	if (!pairBiggest.empty() && pairBiggest.front() == -1)
		pairBiggest.pop_front();
}

void fordJohnsonSort(deque<int>& arr)
{
	deque<int> sortedSequence;
	deque<int> pairSmallest;
	deque<int> pairBiggest;

	deque<pair<int, int> > pairs = partition(arr);
	pairSmallest = getSmallValues(pairs);
	pairBiggest = getBigValues(pairs);
	swapFirstElement(pairBiggest, pairSmallest);
	fordJohnsonInsertion(pairBiggest, pairSmallest);
	arr = pairBiggest;
}