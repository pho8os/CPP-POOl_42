/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:57:08 by absaid            #+#    #+#             */
/*   Updated: 2023/10/12 05:09:06 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

int main() {
  // try {
  //   PresidentialPardonForm F("PARDON FORM");
  //   Bureaucrat mark("Phobos", 4);
  //   mark.signForm(F);
  //   mark.executeForm(F);
  // } catch (std::exception &e) {
  //   std::cout << e.what();
  // }
  try{
    RobotomyRequestForm F("ROBOT");
    Bureaucrat mark("Phobos", 13);
    std::cout << F << std::endl;
    mark.signForm(F);
    std::cout << F << std::endl;
    mark.executeForm(F);
  }
  catch (std::exception &e) {
    std::cout << e.what();
  }
  // try{
  //   ShrubberyCreationForm F("chajra");
  //   Bureaucrat mark("Phobos", 13);
  //   mark.signForm(F);
  //   mark.executeForm(F);
  // }
  // catch (std::exception &e) {
  //   std::cout << e.what();
  // }
}