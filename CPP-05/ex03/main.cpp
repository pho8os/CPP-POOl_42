/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:57:08 by absaid            #+#    #+#             */
/*   Updated: 2023/10/12 00:48:23 by absaid           ###   ########.fr       */
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
      mark.signForm(*rrf);
      mark.executeForm(*rrf);
      delete rrf;
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}