/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:27:53 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/16 11:35:08 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() 
{	
	/////////////////////////////// MUTANT STACK ///////////////////////////////
	cout << "// SUBJECT EXAMPLE //" << endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	cout << mstack.top() << endl;
	mstack.pop();
	cout << mstack.size() << endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		cout << *it << endl;
		++it;
	}
	/////////////////////////////// LIST ///////////////////////////////
	cout << endl << "// LIST EXAMPLE //" << endl;
	list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	cout << lstack.back() << endl;
	lstack.pop_back();
	cout << lstack.size() << endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	//[...]
	lstack.push_back(0);
	list<int>::iterator it_list= lstack.begin();
	list<int>::iterator ite_list = lstack.end();
	++it_list;
	--it_list;
	while (it_list != ite_list)
	{
		cout << *it_list << endl;
		++it_list;
	}
	/////////////////////////////// ITERATORS ///////////////////////////////
	cout << endl << "// ITERATORS //" << endl;
	MutantStack<int> mutantStack;
	mutantStack.push(10);
	mutantStack.push(20);
	mutantStack.push(30);
	mutantStack.push(40);
	mutantStack.push(50);
	cout << "Iterate : ";
	for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it)
		cout << *it << " ";
	cout << endl << "Reverse iterate : ";
	for (MutantStack<int>::iterator it = mutantStack.end() - 1; it != mutantStack.begin(); it--)
		cout << *it << " ";
	cout << endl << "Const Iterate : ";
	for (MutantStack<int>::const_iterator it = mutantStack.begin(); it != mutantStack.end(); ++it)
		cout << *it << " ";
	cout << endl << "Const Reverse iterate : ";
	for (MutantStack<int>::const_iterator it = mutantStack.end() - 1; it != mutantStack.begin(); it--)
		cout << *it << " ";
	cout << endl;
	return 0;
}

