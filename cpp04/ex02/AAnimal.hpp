/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:39:42 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/30 09:40:54 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::ostream;

class AAnimal
{
	protected:
		string		_type;

	public:

		AAnimal();
		AAnimal(string str);
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();
		string			getType() const;
		AAnimal			&operator=(AAnimal const &rhs);
		virtual void	makeSound() const = 0;
};

std::ostream &			operator<<(ostream &o, AAnimal const& i);

#endif /* ********************************************************** AANIMAL_H */