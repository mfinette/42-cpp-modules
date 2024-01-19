/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:56:20 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/18 14:28:10 by mfinette         ###   ########.fr       */
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


// UTILS //
int		ft_cerr(string error);
void	printVector(const vector<int>& vec);
void	printDeque(const deque<int>& dq);
void	printPairs(const vector <pair<int, int> > &pairs);

// ALGO //


ostream	&operator<<(ostream &out, const vector <pair<int, int> > &pairs);
ostream	&operator<<(ostream &out, const vector <int> &vec);

#endif
