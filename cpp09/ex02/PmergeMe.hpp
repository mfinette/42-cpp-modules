/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:56:20 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/19 20:18:37 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <sstream>
# include <ctime>
# include <algorithm>
# include <cstdlib>
# include <limits.h>
# include <ctime>

using std::string;
using std::cout;
using std::cerr;
using std::endl;
using std::vector;
using std::pair;
using std::make_pair;
using std::deque;
using std::istringstream;
using std::ostream;
using std::sort;
using std::max;
using std::min;
using std::strtol;

// UTILS //
bool	ft_cerr(string error);

// ALGO //
void fordJohnsonSort(vector<int>& arr);
void fordJohnsonSort(deque<int>& arr);

// OUT OPERATORS //
ostream	&operator<<(ostream &out, const vector <pair<int, int> > &pairs);
ostream	&operator<<(ostream &out, const vector <int> &vec);
ostream	&operator<<(ostream &out, const deque <int> &dq);

#endif
