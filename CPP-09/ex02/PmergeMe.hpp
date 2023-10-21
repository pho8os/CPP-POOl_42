/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:25:03 by absaid            #+#    #+#             */
/*   Updated: 2023/10/21 15:57:34 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <iostream>
#include <vector>

template <typename T> int bsi(T &v, const int &element) {
  int low = 0;
  int high = v.size() - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (element < v[mid]) {
      high = mid - 1;
    } else if (element > v[mid]) {
      low = mid + 1;
    } else {
      return mid;
    }
  }
  return low;
}

void thefuncVec(std::string s);
void thefuncDeque(std::string s);
