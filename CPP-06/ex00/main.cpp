/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:30:06 by absaid            #+#    #+#             */
/*   Updated: 2023/10/13 12:04:02 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ScalarConverter.hpp"
#include "ScalarConverter.hpp"
#include <cstdlib>
#include<iostream>
#include <string>
void trim(std::string& s) {
  while (s.begin() != s.end() && isspace(*s.begin())) 
    s.erase(s.begin());
  while (s.end() != s.begin() && isspace(*s.rbegin()))
    s.pop_back();
}

int main(int ac, char **av) {
  (void)ac;
  (void)av;
  if (ac != 2)
    return (std::cout << "error!" << std::endl, 1);
  std::string a(av[1]);
  trim(a);
  if(!a.length())
    return (std::cout << "Empty arg!!" << std::endl, 1);
  ScalarConverter::convert(a);
}