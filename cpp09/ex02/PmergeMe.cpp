/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:56:17 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/22 21:11:40 by mfinette         ###   ########.fr       */
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

std::ostream& operator<<(std::ostream& out, const std::vector<std::vector<int> >& matrix)
{
    for (size_t i = 0; i < matrix.size(); ++i)
    {
        out << "[ ";
        for (size_t j = 0; j < matrix[i].size(); ++j)
        {
            out << matrix[i][j];
            if (j < matrix[i].size() - 1)
                out << ", ";
        }
        out << " ]";
        if (i < matrix.size() - 1)
            out << std::endl;
    }
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

static void calculateGroupSizes(std::vector<size_t>& groupSizes, size_t totalElements)
{
	size_t			currentSize = 2;
	static size_t	lastSize = 0;
	size_t			tmp;

	while (totalElements > 0)
	{
		size_t groupSize = std::min(currentSize, totalElements);
		groupSizes.push_back(groupSize);
		totalElements -= groupSize;
		if (lastSize == 0)
		{
			currentSize = 2;
			lastSize = 2;
		}
		else
		{
			tmp = currentSize;
			currentSize = (2 * lastSize) + currentSize;
			lastSize = tmp;
		}
    }
}

static vector<std::vector<int> >	partitionIntoGroups(const std::vector<int>& uninsertedElements)
{
	std::vector<std::vector<int> > groupedElements;
	std::vector<size_t> groupSizes;
	calculateGroupSizes(groupSizes, uninsertedElements.size());
	size_t currentIndex = 0;
	for (size_t i = 0; i < groupSizes.size(); ++i)
	{
		size_t groupSize = groupSizes[i];
		std::vector<int> group(uninsertedElements.begin() + currentIndex, uninsertedElements.begin() + currentIndex + groupSize);
		groupedElements.push_back(group);
		currentIndex += groupSize;
	}
	return groupedElements;
}

static bool compareInts(int a, int b)
{
	return a < b;
}

static void orderGroups(std::vector<int>& sequence, const std::vector<std::vector<int> >& groups)
{
	vector<int>	tmp;
	for (std::vector<std::vector<int> >::const_iterator it = groups.begin(); it != groups.end(); ++it)
	{
		std::vector<int> sortedGroup = *it;
		std::sort(sortedGroup.begin(), sortedGroup.end(), compareInts);
		tmp.insert(tmp.end(), sortedGroup.begin(), sortedGroup.end());
	}
	vector<int>::iterator finder = std::find(tmp.begin(), tmp.end(), -1);
	if (finder != tmp.end())
		tmp.erase(finder);
	sequence = tmp;
}

static void	insertRemainingElements(const std::vector<int>& sourceVector, std::vector<int>& destinationVector)
{
	for (std::vector<int>::const_iterator it = sourceVector.begin(); it != sourceVector.end(); ++it)
	{
		std::vector<int>::iterator ite = std::lower_bound(destinationVector.begin(), destinationVector.end(), *it);
		if (ite == destinationVector.end() || *ite != *it)
			destinationVector.insert(ite, *it);
	}
	if (destinationVector.front() == -1)
		destinationVector.erase(destinationVector.begin());
}

void fordJohnsonSort(vector<int>& arr)
{
	vector<int>	pairSmallest;
	vector<int>	pairBiggest;
	vector<vector<int> >	groups;
	vector<pair<int, int> > pairs = partition(arr);

	pairSmallest = getSmallValues(pairs);
	pairBiggest = getBigValues(pairs);
	swapFirstElement(pairBiggest, pairSmallest);
	groups = partitionIntoGroups(pairSmallest);
	orderGroups(pairSmallest, groups);
	insertRemainingElements(pairSmallest, pairBiggest);
	arr = pairBiggest;
}

////////////////////////////////// DEQUE //////////////////////////////////


static void sortDequeDescending(std::deque<std::pair<int, int> >& deq)
{
	std::sort(deq.begin(), deq.end(), compareDescending);
}

static std::deque<std::pair<int, int> > partition(std::deque<int>& arr)
{
	std::deque<std::pair<int, int> > pairs;
	for (size_t i = 0; i < arr.size(); i += 2)
	{
		if (i + 1 < arr.size())
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i], -1));
	}
	sortDequeDescending(pairs);
	return pairs;
}

static std::deque<int> getSmallValues(const std::deque<std::pair<int, int> >& pairs)
{
	std::deque<int> smallValues;

	for (size_t i = 0; i < pairs.size(); ++i)
		smallValues.push_back(std::min(pairs[i].first, pairs[i].second));
	return smallValues;
}

static std::deque<int> getBigValues(const std::deque<std::pair<int, int> >& pairs)
{
	std::deque<int> bigValues;

	for (size_t i = 0; i < pairs.size(); ++i)
		bigValues.push_back(std::max(pairs[i].first, pairs[i].second));
	return bigValues;
}

static void swapFirstElement(std::deque<int>& vec1, std::deque<int>& vec2)
{
	vec1.insert(vec1.begin(), vec2[0]);
	vec2.erase(vec2.begin());
}

static void calculateGroupSizes(std::deque<size_t>& groupSizes, size_t totalElements)
{
	size_t currentSize = 2;
	static size_t lastSize = 0;
	size_t tmp;

	while (totalElements > 0)
	{
		size_t groupSize = std::min(currentSize, totalElements);
		groupSizes.push_back(groupSize);
		totalElements -= groupSize;
		if (lastSize == 0)
		{
			currentSize = 2;
			lastSize = 2;
		}
		else
		{
			tmp = currentSize;
			currentSize = (2 * lastSize) + currentSize;
			lastSize = tmp;
		}
	}
}

static std::deque<std::deque<int> > partitionIntoGroups(const std::deque<int>& uninsertedElements)
{
	std::deque<std::deque<int> > groupedElements;
	std::deque<size_t> groupSizes;
	calculateGroupSizes(groupSizes, uninsertedElements.size());
	size_t currentIndex = 0;
	for (size_t i = 0; i < groupSizes.size(); ++i)
	{
		size_t groupSize = groupSizes[i];
		std::deque<int> group(uninsertedElements.begin() + currentIndex, uninsertedElements.begin() + currentIndex + groupSize);
		groupedElements.push_back(group);
		currentIndex += groupSize;
	}
	return groupedElements;
}

static void orderGroups(std::deque<int>& sequence, const std::deque<std::deque<int> >& groups)
{
	std::deque<int> tmp;
	for (std::deque<std::deque<int> >::const_iterator it = groups.begin(); it != groups.end(); ++it)
	{
		std::deque<int> sortedGroup = *it;
		std::sort(sortedGroup.begin(), sortedGroup.end(), compareInts);
		tmp.insert(tmp.end(), sortedGroup.begin(), sortedGroup.end());
	}
	std::deque<int>::iterator finder = std::find(tmp.begin(), tmp.end(), -1);
	if (finder != tmp.end())
		tmp.erase(finder);
	sequence.assign(tmp.begin(), tmp.end());
}

static void insertRemainingElements(const std::deque<int>& sourceVector, std::deque<int>& destinationDeque)
{
	for (std::deque<int>::const_iterator it = sourceVector.begin(); it != sourceVector.end(); ++it)
	{
		std::deque<int>::iterator ite = std::lower_bound(destinationDeque.begin(), destinationDeque.end(), *it);
		if (ite == destinationDeque.end() || *ite != *it)
			destinationDeque.insert(ite, *it);
	}
	if (destinationDeque.front() == -1)
	destinationDeque.erase(destinationDeque.begin());
}

void fordJohnsonSort(std::deque<int>& arr)
{
	std::deque<int> pairSmallest;
	std::deque<int> pairBiggest;
	std::deque<std::deque<int> > groups;
	std::deque<std::pair<int, int> > pairs = partition(arr);

	pairSmallest = getSmallValues(pairs);
	pairBiggest = getBigValues(pairs);
	swapFirstElement(pairBiggest, pairSmallest);
	groups = partitionIntoGroups(pairSmallest);
	orderGroups(pairSmallest, groups);
	insertRemainingElements(pairSmallest, pairBiggest);
	arr.assign(pairBiggest.begin(), pairBiggest.end());
}