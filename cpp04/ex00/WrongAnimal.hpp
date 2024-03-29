/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:03:08 by maxime            #+#    #+#             */
/*   Updated: 2023/10/30 09:30:04 by mfinette         ###   ########.fr       */
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
		void	makeSound() const;
};

std::ostream &			operator<<(ostream &o, WrongAnimal const& i);

#endif /* ********************************************************** WRONGANIMAL_H */