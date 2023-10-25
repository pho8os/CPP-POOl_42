/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:26:28 by absaid            #+#    #+#             */
/*   Updated: 2023/10/24 20:25:48 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <climits>
#include <string>
#include <utility>
#include <vector>

bool digitis(std::string &s) {
  for (int i = 0; i < (int)s.size(); i++)
    if (!std::isdigit(s[i]))
      return false;
  if (std::stoul(s) > INT_MAX)
    return false;
  return true;
}