/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 06:51:45 by absaid            #+#    #+#             */
/*   Updated: 2023/10/20 13:43:09 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, double> BitcoinExchange::data;
BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) { *this = obj; }
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj) {
  (void)obj;
  return *this;
}
BitcoinExchange::~BitcoinExchange() {}

bool isNumber(std::string s) {
  bool comma = false;
  int i = 0;
  if (std::isspace(s[i]))
    i++;
  if (s[0] == '+')
    i++;
  if (!s[i])
    return false;
  for (int j = i; j < (int)s.length(); j++) {
    if (!std::isdigit(s[j])) {
      if (s[j] == '.' && !comma && std::isdigit(s[j + 1])) {
        comma = true;
      } else
        return (false);
    }
  }
  if (std::atof(s.c_str()) > INT_MAX)
    return false;
  return (true);
}

bool is_valid_date(std::string date) {
  int year, month, day;
  std::string s = date.substr(0, 4);
  if (!isNumber(s))
    return false;
  year = std::stoi(s);
  s = date.substr(5, 2);
  if (!isNumber(s))
    return false;
  month = std::stoi(s);
  s = date.substr(8, 2);
  if (!isNumber(s))
    return false;
  day = std::stoi(s);
  if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
    return false;
  if (month == 2 && day >= 29) {
    if (year % 4 || !(year % 100 == year % 400))
      return false;
  }
  if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
    return false;
  }
  if (year == 2009 && month == 1 && day == 1)
    return false;
  return true;
}

std::string *splitdata(std::string line, std::string sep) {
  char *s[2];
  std::string *str = new std::string[2]();
  s[0] = std::strtok((char *)line.c_str(), sep.c_str());
  (!s[0]) && (s[0] = (char *)"(null)");
  if (!is_valid_date(s[0]))
    throw std::runtime_error(std::string(s[0]) + " : Invalid date");
  s[1] = std::strtok(NULL, sep.c_str());
  if (!s[1] || !isNumber(s[1]))
    throw std::runtime_error(std::string(s[0]) + " : Value error");
  if (std::strtok(NULL, sep.c_str()))
    throw std::runtime_error(std::string(s[0]) + sep + s[1] +
                             " : too much parameters");
  str[0] = s[0];
  str[1] = s[1];
  return str;
}

std::map<std::string, double> parsedata(std::string file) {
  if (!std::freopen(file.c_str(), "r", stdin))
    throw(std::runtime_error(file + ": Could not be open."));
  std::map<std::string, double> data;
  std::string line;
  while (std::getline(std::cin, line))
    if (!line.empty())
      break;
  if (line != "date,exchange_rate")
    throw std::runtime_error("Data : Header not found");
  while (!std::cin.eof() && std::getline(std::cin, line)) {
    if (line.empty())
      continue;
    std::string *str = splitdata(line, ",");
    data.insert(std::make_pair(std::string(str[0]), std::stod(str[1])));
    delete[] str;
  }
  return data;
}

double BitcoinExchange::getprice(std::string date) {
  std::map<std::string, double>::iterator it;
  it = BitcoinExchange::data.find(date);
  if (it == BitcoinExchange::data.end()) {
    it = BitcoinExchange::data.lower_bound(date);
    if (it != BitcoinExchange::data.begin())
      it--;
  }
  return (it->second);
}