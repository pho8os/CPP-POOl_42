/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:23:42 by absaid            #+#    #+#             */
/*   Updated: 2023/10/20 16:13:05 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>
#include <stdexcept>

bool isoperator(char c) {
  if (c == '+' || c == '/' || c == '*' || c == '-')
    return true;
  return false;
}

int calculos(int first, int second, std::string ss) {
  if (ss == "/") {
    if (!second)
      throw(std::runtime_error("Arithmitic operation error!"));
    return (first / second);
  } else if (ss == "+")
    return (first + second);
  else if (ss == "-")
    return (first - second);
  else if (ss == "*")
    return (first * second);
  return 0;
}

void thefun(std::string s) {
  std::stack<int> thes;
  char *p = std::strtok((char *)s.c_str(), " ");
  if (!p)
    throw(std::runtime_error("error: Empty argument!"));
  while (p) {
    std::string ss(p);
    if (ss.size() > 1 || (!std::isdigit(ss[0]) && !isoperator(ss[0])))
      throw(std::runtime_error("\"" + ss + "\"" + " : Invalid parameter!"));
    if (std::isdigit(ss[0]))
      thes.push(std::atoi(ss.c_str()));
    else if (isoperator(ss[0])) {
      if (thes.size() < 2)
        throw(std::runtime_error("\"" + ss + "\"" + " : Order error!"));
      int second = thes.top();
      thes.pop();
      int first = thes.top();
      thes.pop();
      int result = calculos(first, second, ss);
      thes.push(result);
    }
    p = std::strtok(NULL, " ");
  }
  if (thes.size() != 1)
    throw(std::runtime_error("Invalid operation!"));
  std::cout << thes.top() << std::endl;
}