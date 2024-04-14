/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:19:45 by mfinette          #+#    #+#             */
/*   Updated: 2024/04/14 16:10:45 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0)
{
}

Span::Span(const Span &src) : _N(src._N)
{
	this->_container.clear();
	this->_container = src._container;
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::~Span()
{
}

Span	&Span::operator=(const Span &rhs)
{
	this->_N = rhs._N;
	this->_container = rhs._container;
	return *this;
}

void	Span::addNumber(int N)
{
	if (_container.size() > this->_N - 1)
		throw	std::out_of_range("Container at max capacity: Can't add any more numbers");
	else
		this->_container.push_back(N);	
}

int		Span::shortestSpan(void)
{
	int				shortest;
	vector<int>		vector = this->_container;
	
	if (vector.size() < 2)
		throw std::out_of_range("To calculate span, container needs to have at least 2 elements");
	sort(vector.begin(), vector.end());
	shortest = abs(vector[0] - vector[1]);
	for (size_t i = 0; i < vector.size(); i++)
		if (abs(vector[i] - vector[i + 1]) < shortest)
			shortest = abs(vector[i] - vector[i + 1]);
	return shortest;
}

int		Span::longestSpan()
{
	int				longest;
	vector<int>		vector = this->_container;

	if (vector.size() < 2)
		throw std::out_of_range("To calculate span, container needs to have at least 2 elements");
	sort(vector.begin(), vector.end());
	longest = vector[vector.size() - 1] - vector[0];
	return longest;
}

void	Span::printSpan()
{
	for (size_t	i = 0; i < this->_N; i++)
		cout << this->_container[i] << " ";
	cout << endl;
}

void	Span::addNumbers(int N, int qt)
{
	for (int i = 0; i < qt; i++)
		this->_container.push_back(N);
}