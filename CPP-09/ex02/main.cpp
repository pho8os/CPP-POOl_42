/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:01:41 by absaid            #+#    #+#             */
/*   Updated: 2023/10/23 13:40:08 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>
#include <sys/_types/_clock_t.h>
#include <sys/_types/_time_t.h>
int main(int ac, char **av) {
  if (ac < 3)
    return (std::cout << "Invalid number of args!" << std::endl, 1);
  try {
    double a = clock();
    std::vector<int> v = thefuncVec(ac - 1, av + 1);
    a = (clock() - a) / CLOCKS_PER_SEC;
    double b = clock();
    thefuncDeque(ac - 1, av + 1);
    b = (clock() - b) / CLOCKS_PER_SEC;
    std::cout << "Before : ";
    for(int i = 1; i < ac; i++)
        std::cout << av[i] << " ";
    std::cout << std::endl;
    std::cout << "After :  ";
    for(int i = 0; i < (int)v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << "\n" << std::endl;
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << std::fixed << a << std::endl;
    std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << std::fixed << b << std::endl;
    while(1);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}