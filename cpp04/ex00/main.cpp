/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:32:23 by maxime            #+#    #+#             */
/*   Updated: 2023/10/30 09:34:09 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	cout << "----- TEST ANIMAL ------" << endl;
	const Animal* animal = new Animal();
	animal->makeSound();
	delete animal;
	cout << "---------------------" << endl << endl;	
	cout << "----- TEST CAT ------" << endl;
	const Animal* cat = new Cat();
	cat->makeSound();
	delete cat;
	cout << "---------------------" << endl << endl;
	cout << "----- TEST DOG ------" << endl;
	const Animal* dog = new Dog();
	dog->makeSound();
	delete dog;
	cout << "---------------------" << endl << endl;
	cout << "----- TEST WRONGANIMAL ------" << endl;
	const WrongAnimal* wronganimal = new WrongAnimal();
	wronganimal->makeSound();
	delete wronganimal;
	cout << "---------------------" << endl << endl;	
	cout << "----- TEST WRONGCAT ------" << endl;
	const WrongCat* wrongcat = new WrongCat();
	wrongcat->makeSound();
	delete wrongcat;
	cout << "---------------------" << endl << endl;
	cout << "----- TEST WRONGCAT AS WRONGANIMAL ------" << endl;
	WrongAnimal *animals = new WrongCat;
	animals->makeSound();
	delete animals;
	cout << "---------------------" << endl << endl;
	return (0);
}
