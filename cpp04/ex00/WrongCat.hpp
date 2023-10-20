/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime <maxime@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:06:04 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 11:06:58 by maxime           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:

		WrongCat();
		WrongCat(WrongCat const &src);
		~WrongCat();
		void		makeSound() const;
		WrongCat 		&operator=(WrongCat const &rhs);
};

ostream 			&operator<<(ostream &o, WrongCat const &i);

#endif /* ************************************************************* WRONGCAT_H */