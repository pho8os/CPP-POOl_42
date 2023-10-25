/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:25:03 by absaid            #+#    #+#             */
/*   Updated: 2023/10/24 20:33:09 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <iostream>
#include <vector>

// std::vector<int> thefuncVec(int ac, char **av);
// void thefuncDeque(int ac, char **av);
bool digitis(std::string &s);

template <typename T> 
T thefunc(int ac, char **av) {
  T themain;
  int theodd = -1;
  if ((ac) % 2)
    ac--;
  for (int i = 0; i < ac; i += 2) {
    std::string s1(av[i]);
    std::string s2(av[i + 1]);
    if (!digitis(s1))
      throw(std::runtime_error("\"" + s1 + "\" : Invalid parameter!"));
    if (!digitis(s2))
      throw(std::runtime_error("\"" + s2 + "\" : Invalid parameter!"));
    int first = std::atoi(s1.c_str());
    int second = std::atoi(s2.c_str());
    if (first < second)
      std::swap(first, second);
    themain.push_back(first);
    themain.push_back(second);
  }
  if (av[ac]) {
    std::string s(av[ac]);
    if (!digitis(s))
      throw(std::runtime_error("\"" + s + "\" : Invalid parameter!"));
    theodd = std::atoi(s.c_str());
  }

  for (int i = 2; i < (int)themain.size(); i += 2) {
    int j = i - 2;
    while (j >= 0 && themain[j + 2] < themain[j]) {
      std::swap(themain[j + 2], themain[j]);
      std::swap(themain[j + 3], themain[j + 1]);
      j -= 2;
    }
  }
  T thepend;
  for (int i = 1; i < (int)themain.size(); i++) {
    thepend.push_back(themain[i]);
    themain.erase(themain.begin() + i);
  }
  themain.insert(themain.begin(), thepend[0]);
  {
    int a = 0, b = 1;
    int next = a * 2 + b;
    int size = thepend.size();
    for (int i = 0; next < size; i++) {
      a = b;
      b = next;
      next = a * 2 + b;
      if (next > size)
        next = size;
      for (int j = next; j > b; j--) {
        if (j <= size) {
          themain.insert(
              std::lower_bound(themain.begin(), themain.end(), thepend[j - 1]),
              thepend[j - 1]);
        }
      }
    }
  }
  if (theodd != -1)
    themain.insert(std::lower_bound(themain.begin(), themain.end(), theodd),
                  theodd);
  return (themain);
}