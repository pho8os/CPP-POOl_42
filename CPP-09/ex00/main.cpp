/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 06:51:48 by absaid            #+#    #+#             */
/*   Updated: 2023/10/23 13:03:07 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <exception>
#include <map>
#include <sstream>

int main(int ac, char **av) {
  (void)av;
  if (ac != 2)
    return (std::cout << "the program accept one argument." << std::endl, 1);
  try {
    BitcoinExchange::data = parsedata("./data.csv");
  } catch (std::exception &e) {
    return (std::cout << e.what() << std::endl, 1);
  }
  std::cin.clear();
  if (!std::freopen(av[1], "r", stdin))
    return (std::cout << std::string(av[1]) + ": Could not be open.", 1);
  std::string line;
  while (std::getline(std::cin, line))
    if (!line.empty())
      break;
  if (line != "date | value")
    return (std::cout << std::string(av[1]) + " missing header" << std::endl,
            1);
  while (std::getline(std::cin, line)) {
    if (line.empty())
      continue;
    else if(line.find("|") != line.rfind("|") || line[11] != '|')
    {
        std::cout << line +  " : input error!" << std::endl;
        continue;
    }
    try {
      std::string *str = splitdata(line, "|");
      if (std::atof(str[1].c_str()) >= 1001) {
        std::cout << std::string(str[0]) + " : value > 1000!" << std::endl;
        continue;
      }
      if ((str[0].size() < 11 && *(str[0].end() - 1) != ' ') ||
          str[1][0] != ' ') {
        std::cout << std::string(str[0]) + " : input error!" << std::endl;
        continue;
      }
      std::cout << str[0] + "=>" + str[1] + " = ";
      std::cout << (double)std::atof(str[1].c_str()) *
                       BitcoinExchange::getprice(str[0])
                << std::endl;
      delete[] str;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
}