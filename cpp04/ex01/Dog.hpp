/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:25:21 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 17:32:55 by mfinette         ###   ########.fr       */
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
		Brain	*_Brain;
	public:

		Dog();
		Dog(Dog const &src);
		~Dog();
		void		makeSound() const;
		Dog 		&operator=(Dog const &rhs);
};

#endif /* ************************************************************* Dog_H */