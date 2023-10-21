/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:14:27 by absaid            #+#    #+#             */
/*   Updated: 2023/10/20 16:12:01 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <exception>

int main(int ac, char **av) {
  if (ac != 2)
    return (std::cout << "error: Input invalid" << std::endl, 1);
  try {
    thefun(av[1]);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}