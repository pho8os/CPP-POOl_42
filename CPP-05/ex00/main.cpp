/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:27:23 by absaid            #+#    #+#             */
/*   Updated: 2023/10/13 10:55:52 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
int main() {
  try {
    {
      Bureaucrat a("phobos", 36);
      a.increment();
      std::cout << a << std::endl;
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    {
      Bureaucrat a("deimos", 1);
      a.increment();
      std::cout << a << std::endl;
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    {
      Bureaucrat a("deimos", 150);
      a.decrement();
      std::cout << a << std::endl;
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  
}