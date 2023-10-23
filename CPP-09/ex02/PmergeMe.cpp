/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:26:28 by absaid            #+#    #+#             */
/*   Updated: 2023/10/23 11:10:11 by absaid           ###   ########.fr       */
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

std::vector<int> thefuncVec(int ac, char **av) {
  std::vector<int> thevec;
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
    thevec.push_back(first);
    thevec.push_back(second);
  }
  if(av[ac])
  {
    std::string s(av[ac]);
    if(!digitis(s))
      throw(std::runtime_error("\"" + s + "\" : Invalid parameter!"));
    theodd = std::atoi(s.c_str());
  }

  for (int i = 2; i < (int)thevec.size(); i += 2) {
    int j = i - 2;
    while (j >= 0 && thevec[j + 2] < thevec[j]) {
      std::swap(thevec[j + 2], thevec[j]);
      std::swap(thevec[j + 3], thevec[j + 1]);
      j -= 2;
    }
  }
  std::vector<int> pendvec;
  for (int i = 1; i < (int)thevec.size(); i++) {
    pendvec.push_back(thevec[i]);
    thevec.erase(thevec.begin() + i);
  }
  thevec.insert(thevec.begin(), pendvec[0]);
  {
    int a = 0, b = 1;
    int next = a * 2 + b;
    int size = pendvec.size();
    for (int i = 0; next < size ; i++) {
      a = b;
      b = next;
      next = a * 2 + b;
      if(next > size)
        next = size;
      for (int j = next; j > b; j--) {
        if (j <= size) {
          thevec.insert(
              std::lower_bound(thevec.begin(), thevec.end(), pendvec[j - 1]),
              pendvec[j - 1]);
        }
      }
    }
  }
  if (theodd != -1)
    thevec.insert(std::lower_bound(thevec.begin(), thevec.end(), theodd),
                  theodd);
  return (thevec);
}

void thefuncDeque(int ac, char **av) {
  std::deque<int> thedeque;
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
    thedeque.push_back(first);
    thedeque.push_back(second);
  }
  if(av[ac])
  {
    std::string s(av[ac]);
    if(!digitis(s))
      throw(std::runtime_error("\"" + s + "\" : Invalid parameter!"));
    theodd = std::atoi(s.c_str());
  }
  for (int i = 2; i < (int)thedeque.size(); i += 2) {
    int j = i - 2;
    while (j >= 0 && thedeque[j + 2] < thedeque[j]) {
      std::swap(thedeque[j + 2], thedeque[j]);
      std::swap(thedeque[j + 3], thedeque[j + 1]);
      j -= 2;
    }
  }
  std::deque<int> penddeque;
  for (int i = 1; i < (int)thedeque.size(); i++) {
    penddeque.push_back(thedeque[i]);
    thedeque.erase(thedeque.begin() + i);
  }
  thedeque.insert(thedeque.begin(), penddeque[0]);
  {
    int a = 0, b = 1;
    int next = a * 2 + b;
    int size = penddeque.size();
    for (int i = 0; next < size ; i++) {
      a = b;
      b = next;
      next = a * 2 + b;
      if(next > size)
        next = size;
      for (int j = next; j > b; j--) {
        if (j <= size) {
          thedeque.insert(
              std::lower_bound(thedeque.begin(), thedeque.end(), penddeque[j - 1]),
              penddeque[j - 1]);
        }
      }
    }
  }
  if (theodd != -1)
    thedeque.insert(std::lower_bound(thedeque.begin(), thedeque.end(), theodd),
                  theodd);
}