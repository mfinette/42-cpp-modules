/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime <maxime@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:06:01 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 11:06:02 by maxime           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:

		Cat();
		Cat(Cat const &src);
		~Cat();
		void		makeSound() const;
		Cat 		&operator=(Cat const &rhs);
};

ostream 			&operator<<(ostream &o, Cat const &i);

#endif /* ************************************************************* CAT_H */