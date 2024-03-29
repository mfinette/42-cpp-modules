/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:06:01 by maxime            #+#    #+#             */
/*   Updated: 2023/10/26 11:40:44 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*_Brain;
	public:

		Cat();
		Cat(Cat const &src);
		virtual ~Cat();
		void		makeSound() const;
		Cat 		&operator=(Cat const &rhs);
};

#endif /* ************************************************************* CAT_H */