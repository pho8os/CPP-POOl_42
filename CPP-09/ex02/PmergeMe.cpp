/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:26:28 by absaid            #+#    #+#             */
/*   Updated: 2023/10/21 16:03:12 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
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

void thefuncVec(std::string s) {
  std::vector<int> thevec;
  int theodd = -1;
  char *p = std::strtok((char *)s.c_str(), " ");
  if (!p)
    throw(std::runtime_error("error: Empty argument!"));
  while (p) {
    std::string ss(p);
    if (!digitis(ss))
      throw(std::runtime_error("\"" + ss + "\" : Invalid parameter!"));
    thevec.push_back(std::atoi(ss.c_str()));
    p = std::strtok(NULL, " ");
  }
  (thevec.size() % 2 == 1) &&
      (theodd = *(thevec.end() - 1), thevec.pop_back(), 0);
  std::vector<std::pair<int, int> > pairs;
  for (std::vector<int>::iterator it = thevec.begin(); it < thevec.end(); //merge sort start
       it += 2)
    pairs.push_back(std::make_pair(*it, *(it + 1)));
  for (std::vector<std::pair<int, int> >::iterator it = pairs.begin();
       it < pairs.end(); it++)
    if (it->first < it->second)
      std::swap(it->first, it->second);
  for (int i = 1; i < (int)pairs.size(); ++i) { // insertion sort
    std::pair<int, int> current = pairs[i];
    int j = i - 1;
    while (j >= 0 && current.first < pairs[j].first) {
      pairs[j + 1] = pairs[j];
      --j;
    }
    pairs[j + 1] = current;
  }
  std::vector<int> mainvec;
  std::vector<int> chainvec;
  for (std::vector<std::pair<int, int> >::iterator it = pairs.begin();
       it < pairs.end(); it++) {
    mainvec.push_back(it->first);
    chainvec.push_back(it->second);
  }
  mainvec.insert(mainvec.begin(), chainvec[0]);
  int a = 0, b = 1;
  int next = a * 2 + b;
  int size = chainvec.size();
  for (int i = 0; ; i++) {
    a = b;
    b = next;
    next = a * 2 + b;
    for (int j = next ; j > b ; j--) {
      if (j <= size)
        mainvec.insert(mainvec.begin() + bsi(mainvec, chainvec[j - 1]), chainvec[j - 1]);
    }
    if (next > size)
      break;
  }
  if(theodd >= 0)
    mainvec.insert(mainvec.begin() + bsi(mainvec, theodd), theodd);
  for (std::vector<int>::iterator it = mainvec.begin(); it < mainvec.end(); it++)
    std::cout << *it << " \t";
  std::cout << std::endl;
}