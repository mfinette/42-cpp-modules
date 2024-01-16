/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:44:40 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/16 11:03:53 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::distance;

template<typename T>
typename T::iterator easyfind(T &container, int n) {
    return std::find(container.begin(), container.end(), n);
}
#endif
