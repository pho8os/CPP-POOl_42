/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:18:21 by absaid            #+#    #+#             */
/*   Updated: 2023/10/11 23:53:38 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(const Intern &obj) { (void)obj; }
Intern &Intern::operator=(const Intern &obj) {
  (void)obj;
  return (*this);
}

const char *Intern::WrongFormException::what() const throw() {
  return ("Invalid Form!!");
}

AForm *Intern::makeForm(std::string formtype, std::string form) {
  int index = (formtype == "robotomy request") * 1 +
              (formtype == "presidential pardon") * 2 +
              (formtype == "shrubbery creation") * 3;
  switch (index) {
  case (0):
    throw(WrongFormException());
  case (1):
    return (std::cout << "Intern creates " << form << std::endl,
            new RobotomyRequestForm(form));
  case (2):
    return (std::cout << "Intern creates " << form << std::endl,
            new PresidentialPardonForm(form));
  case (3):
    return (std::cout << "Intern creates " << form << std::endl,
            new ShrubberyCreationForm(form));
  }
  return (NULL);
}
