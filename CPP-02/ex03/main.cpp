/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:25:35 by absaid            #+#    #+#             */
/*   Updated: 2023/09/14 23:09:11 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) {

  {
    Point a((1), (1));
    Point b((1), (3));
    Point c((3), (1));
    Point p((1.5f), (1.5f));
    if (bsp(a, b, c, p))
      std::cout << "true" << std::endl;
    else
      std::cout << "false" << std::endl;
  }
  {
    Point a((7), (7));
    Point b((11), (1));
    Point c((2), (2));
    Point p((0), (0));
    if (bsp(a, b, c, p))
      std::cout << "true" << std::endl;
    else
      std::cout << "false" << std::endl;
  }
}