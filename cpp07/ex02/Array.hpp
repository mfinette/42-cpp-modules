/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:52:45 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/11 14:53:37 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

using std::cout;
using std::endl;
using std::out_of_range;
using std::cerr;
using std::exception;

template<typename T>
class	Array
{
	private:
		T		*_array;
		size_t	_size;
	
	public:
	//////////////////// CONSTRUCTORS  AND DESTRUCTOR ////////////////////
			//DEFAULT CONSTRUCTOR
					Array() : _size(0) , _array(new T[_size]) {};
			//PARAMETER CONSTRUCTOR
					Array(int n)
					{
						this->_size = n;
						this->_array = new T[_size];
					}
			//COPY CONSTRUCTOR
					Array(const Array &src) : _size(src._size), _array(new T[src._size])
					{
						for (int i = 0; i < src.size; i++)
							this->_array[i] = src->_array[i];
					}
			//DESTRUCTOR
					~Array()
					{
						delete this->_array;
					}
	//////////////////// OPERATORS ////////////////////
			//OPERATOR=
		Array		&operator=(const Array &rhs)
		{
			if (this != rhs)
			{
				this->_size = rhs.size();
				delete []this->_array;
				this->_array = new T[this->_size];
				for (size_t i = 0; i < this->_size; i++)
					this->_array[i] = rhs->_array[i];
			}
			return *this;
		}
			//OPERATOR[]
		T			&operator[](size_t index)
		{
			if (index >= this->_size)
				throw out_of_range("Index out of bounds");
			return this->_array[index];
		}
	//////////////////// METHOD ////////////////////
		size_t		size()
		{
			return (this->_size);
		}
};

#endif