/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:53:36 by absaid            #+#    #+#             */
/*   Updated: 2023/10/15 22:17:58 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>
#include <string>
#include <sys/_types/_uintptr_t.h>

void print_element(int &e) { std::cout << e << "\t"; }
void upper_element(char &e) { e = std::toupper(e); }
int main() {
  int array[] = {1, 2, 3, 4, 5};
  char  a[] = "phobos";
  unsigned long int uint = reinterpret_cast<unsigned long int>(&print_element);
  ::iter(a, 6, upper_element);
    std::cout << a << std::endl;
  char *b = NULL;
  ::iter(b, 6, upper_element);
  ::iter(array, 5, ((void (*)(int &))uint));
  std::cout << std::endl;
}