/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:32:23 by maxime            #+#    #+#             */
/*   Updated: 2023/10/30 09:36:27 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	cout << "-----Constructors-----" << endl;
	const Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

	cout << "-----Destructors-----" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "Animal [" << i << "]" << endl;
		delete animals[i];
		cout << "--------" << endl;
	}
	Dog basic;
	cout << "---" << endl;
	{
		Dog tmp = basic;
	}
	cout << "---" << endl;
}