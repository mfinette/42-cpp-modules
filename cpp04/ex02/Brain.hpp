/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:13:38 by mfinette          #+#    #+#             */
/*   Updated: 2023/10/26 11:40:22 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "AAnimal.hpp"

using std::string;

class Brain
{
	private:
		string	_ideas[100];
	public:

		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain 		&operator=(Brain const &rhs);
};

#endif /* *********************************************************** BRAIN_H */