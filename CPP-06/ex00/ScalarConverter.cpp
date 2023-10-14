/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:38:44 by absaid            #+#    #+#             */
/*   Updated: 2023/10/14 09:16:14 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include"float.h"
#include <cctype>
#include <cfloat>
#include <cstdint>
#include <cstring>
#include <sstream>
#include <string>

bool isSpecial(std::string &s) {
  if (s == "nanf" || s == "inff")
    s.pop_back();
  if (s == "nan" || s == "inf")
    return (true);
  return (false);
}

bool isNumber(std::string &s) {
  bool comma = false;
  int i = 0;
  if (s[0] == '+' || s[0] == '-')
    i++;
  if(!s[i])
    return false;
  for (int j = i; j < (int)s.length(); j++) {
    if (!std::isdigit(s[j])) {
      if (s[j] == '.' && !comma && std::isdigit(s[j + 1])) {
        comma = true;
      } else
        return (false);
    }
  }
  return (true);
}

bool isNumberValid(std::string &s) {
  std::string test[2];
  char *ptr;
  bool check = (s.find("e") != std::string::npos);
  if (s[s.length() - 1] == 'f') {
    if (s.find(".") != std::string::npos || check)
      s.pop_back();
    else
      return false;
  }
  if (!check) {
    if (isNumber(s))
      return (true);
    else
      return (false);
  }
  ptr = std::strtok((char *)s.c_str(), "e");
  if(!ptr)
    return(false);
  test[0] = ptr;
  ptr = std::strtok(NULL, "e");
  if (std::strtok(NULL, "e") || (!ptr && check))
    return (false);
  test[1] = ptr;
  if (isNumber(test[0]) && isNumber(test[1]) &&
      test[1].find(".") == std::string::npos)
    return (s = test[0] + "e" + test[1], true);
  return (0);
}

void printSpecial(std::string &s, int &c) {
  if ((s == "inf" && !c) || (s == "nan" && c))
    return (std::cout << "invalid arg" << std::endl, (void)0);
  std::cout << "char: impossible" << std::endl;
  std::cout << "int: impossible" << std::endl;
  std::cout << "float: ";
  (c == '-' && s == "inf") && (std::cout << "-", 0);
  (c == '+' && s == "inf") && (std::cout << "+", 0);
  std::cout << s << 'f' << std::endl;
  std::cout << "double: ";
  (c == '-' && s == "inf") && (std::cout << "-", 0);
  (c == '+' && s == "inf") && (std::cout << "+", 0);
  std::cout << s << std::endl;
}

void printNumber(std::string &s, int &sign) {
  sign = (sign == '-') * -1 + !(sign == '-') * 1;
  long double ld;
  if (!isNumberValid(s))
    ld = s[0];
  else
    ld = std::atof(s.c_str()) * sign;
  double d = static_cast<double>(ld);
  char c = static_cast<char>(d);
  float f = static_cast<float>(d);
  int i = static_cast<int>(d);
  std::cout << "char: ";
  if (std::isprint(c))
    std::cout << "\'" << c << "\'" << std::endl;
  else
  {
    if(i > 127)
      std::cout << "overflow!!" << std::endl;
    else
      std::cout << "Non displayable" << std::endl;
  } 
  std::cout << "int: ";
  if (d > INT_MAX)
    std::cout << "overflow!!" << std::endl;
  else
    std::cout << i << std::endl;
  float natural = 0;
  if (modf(d, &natural)) {
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
  } else {
    std::cout << "float: ";
    if(ld < FLT_MAX)
      std::cout << f << ".0f" << std::endl;
    else
      std::cout << "Overflow!!" << std::endl;
    std::cout << "double: ";
    if(ld < DBL_MAX)
      std::cout << d << ".0" << std::endl;
    else
      std::cout << "Overflow!!" << std::endl;
  }
}
void ScalarConverter::convert(std::string &s) {
  int c = 0;
  if ((s[0] == '+' || s[0] == '-') && s.length() > 1) {
    c = s[0];
    s = s.substr(1, s.length());
  }
  if (isSpecial(s)) 
    printSpecial(s, c);
  else if (s.length() == 1 || isNumberValid(s)) 
    printNumber(s, c);
  else {
    std::cout << "invalid arg" << std::endl;
  }
}
