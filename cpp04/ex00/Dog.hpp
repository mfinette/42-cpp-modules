/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime <maxime@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:25:21 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 10:30:00 by maxime           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:

		Dog();
		Dog(Dog const &src);
		~Dog();
		void		makeSound() const;
		Dog 		&operator=(Dog const &rhs);
};

ostream 			&operator<<(ostream &o, Dog const &i);

#endif /* ************************************************************* Dog_H */