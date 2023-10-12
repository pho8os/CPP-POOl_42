/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:57:08 by absaid            #+#    #+#             */
/*   Updated: 2023/10/12 05:05:32 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include"Intern.hpp"

int main() {
  try {
    {
      Intern someRandomIntern;
      AForm *rrf;
      rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
      Bureaucrat mark("Phobos", 1);
      std::cout << *rrf << std::endl;
      mark.signForm(*rrf);
      std::cout << *rrf << std::endl;
      mark.executeForm(*rrf);
      delete rrf;
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}