/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxime <maxime@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:03:08 by maxime            #+#    #+#             */
/*   Updated: 2023/10/20 11:03:38 by maxime           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <sstream>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::ostream;

class WrongAnimal
{
	protected:
		string		_type;

	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal();
		string			getType() const;
		WrongAnimal			&operator=(WrongAnimal const &rhs);
		virtual void	makeSound() const;
};

std::ostream &			operator<<(ostream &o, WrongAnimal const& i);

#endif /* ********************************************************** WRONGANIMAL_H */