/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:55:50 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/15 21:34:25 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <vector>

using std::cout;
using std::endl;
using std::stack;
using std::list;

template <typename T>
class MutantStack : public stack<T>
{
	private:

	public:
	MutantStack() {}; 
	MutantStack(const MutantStack &src) : stack<T>(src) {};
	~MutantStack() {this->c.clear();};
	MutantStack	&operator=(const MutantStack &rhs)
	{
		if (rhs != *this)
			this->c = rhs.c;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator begin() const { return this->c.begin(); };
	const_iterator end() const { return this->c.end(); };
	iterator begin() { return this->c.begin(); };
	iterator end() { return this->c.end(); };
};

#endif