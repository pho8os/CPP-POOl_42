/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:39:07 by absaid            #+#    #+#             */
/*   Updated: 2023/10/16 00:37:57 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>
#include <string>

#include <iostream>

#define MAX_VAL 750
int main() {
  {
    try {
      Array<int> a(5);
      a[0] = 1;
      a[1] = 2;
      a[2] = 3;
      a[3] = 4;
      a[4] = 5;
      for (int i = 0; i < 5; i++)
        std::cout << a[i] << "\t";
      std::cout << "size : " << a.size() << std::endl;
      a[6];
    } catch (std::out_of_range e) {
      std::cout << e.what() << std::endl;
    }
  }

  {
    Array<std::string> a(2);
    a[0] = "Phobos";
    a[1] = "ghzal";
    std::cout << a[0] << "\t";
    std::cout << a[1] << "\tsize : " << a.size() << std::endl;
  }
  {
    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++) {
      const int value = rand();
      numbers[i] = value;
      mirror[i] = value;
    }
    // SCOPE
    {
      Array<int> tmp = numbers;
      Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++) {
      if (mirror[i] != numbers[i]) {
        std::cerr << "didn't save the same value!!" << std::endl;
        return 1;
      }
    }
    try {
      numbers[-2] = 0;
    } catch (const std::exception &e) {
      std::cerr << e.what() << '\n';
    }
    try {
      numbers[MAX_VAL] = 0;
    } catch (const std::exception &e) {
      std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++) {
      numbers[i] = rand();
    }
    delete[] mirror;
  }
}