/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:38:44 by absaid            #+#    #+#             */
/*   Updated: 2023/10/13 09:30:32 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cstring>

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
  test[0] = std::strtok((char *)s.c_str(), "e");
  ptr = std::strtok(NULL, "e");
  if (std::strtok(NULL, "e") || (!ptr && check))
    return (false);
  test[1] = ptr;
  if (isNumber(test[0]) && isNumber(test[1]) &&
      test[1].find(".") == std::string::npos)
    return (s = test[0] + "e" + test[1], true);
  return (0);
}

void ScalarConverter::convert(std::string &s) {
  int c = 0;
  if (s[0] == '+' || s[0] == '-') {
    c = s[0];
    s = s.substr(1, s.length());
  }
  if (isSpecial(s)) {
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
  } else if (isNumberValid(s) || s.length() == 1) {
    c = (c == '-') * -1 + !(c == '-') * 1;
    double d;
    if (!isNumberValid(s))
      d = s[0];
    else
      d = std::atof(s.c_str()) * c;
    char c = static_cast<char>(d);
    float f = static_cast<float>(d);
    float i = static_cast<int>(d);
    std::cout << "char: ";
    if (std::isprint(c))
      std::cout << c << std::endl;
    else
      std::cout << "Non displayable" << std::endl;
    std::cout << "int: " << i << std::endl;
    if (s.find(".") != std::string::npos) {
      std::cout << "float: " << f << "f" << std::endl;
      std::cout << "float: " << d << std::endl;

    } else {
      std::cout << "float: " << f << ".0f" << std::endl;
      std::cout << "double: " << d << ".0" << std::endl;
    }
  } else {
    std::cout << "invalid arg" << std::endl;
  }
}
