/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:06:01 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 17:32:51 by mfinette         ###   ########.fr       */
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
		Brain	*_Brain;
	public:

		Cat();
		Cat(Cat const &src);
		~Cat();
		void		makeSound() const;
		Cat 		&operator=(Cat const &rhs);
};

#endif /* ************************************************************* CAT_H */