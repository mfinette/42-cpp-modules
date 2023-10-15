/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:07:39 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/15 10:19:04 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, string name)
{
	Zombie	*ZombieHorde = new Zombie[N];
	
	for (size_t i = 0; (int)i < N; i++)
		ZombieHorde[i].setName(name);
	return (ZombieHorde);
}

bool is_only_digits(const string &str) {
	return (str.find_first_not_of("0123456789") == string::npos);
}

int main() {
    int N = 0;
    string str;
    Zombie *zHorde;

    do {
        if (!is_only_digits(str))
            cout << "-------" << endl << "Please enter a number" << endl;
        cout << "Enter the number of zombies you want in the Horde : ";
        cin >> str;
    } while (!is_only_digits(str));
    std::istringstream(str) >> N;
    zHorde = zombieHorde(N, "jeff");
    for (int i = 0; i < N; i++)
    {
        cout << "Zombie " << i + 1 << " : ";
        zHorde[i].announce();
    }

    delete []zHorde;
    return 0;
}