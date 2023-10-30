/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:04:16 by maxime            #+#    #+#             */
/*   Updated: 2023/10/30 09:37:21 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::ostream;

class Animal
{
	protected:
		string		_type;

	public:

		Animal();
		Animal(string str);
		Animal(Animal const &src);
		virtual ~Animal();
		string			getType() const;
		Animal			&operator=(Animal const &rhs);
		virtual void	makeSound() const;
};

std::ostream &			operator<<(ostream &o, Animal const& i);

#endif /* ********************************************************** ANIMAL_H */