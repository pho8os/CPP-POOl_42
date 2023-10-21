/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:18:21 by absaid            #+#    #+#             */
/*   Updated: 2023/10/13 11:32:45 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(const Intern &obj) { (void)obj; }
Intern &Intern::operator=(const Intern &obj) {
  (void)obj;
  return (*this);
}

AForm *Intern::newShrubbery(std::string &form) {
  std::cout << "Intern creates " << form << std::endl;
  return (new ShrubberyCreationForm(form));
};

AForm *Intern::Formerror(std::string &form) {
  std::cout << form <<": Cannot be created"<< std::endl;
  throw(WrongFormException());
  return (NULL);
};

AForm *Intern::newRobotomy(std::string &form) {
  std::cout << "Intern creates " << form << std::endl;
  return (new RobotomyRequestForm(form));
};

AForm *Intern::newPresidential(std::string &form) {
  std::cout << "Intern creates " << form << std::endl;
  return (new PresidentialPardonForm(form));
};

const char *Intern::WrongFormException::what() const throw() {
  return ("Invalid Form!!");
}

AForm *Intern::makeForm(std::string formtype, std::string form) {
  int index = (formtype == "robotomy request") * 1 +
              (formtype == "presidential pardon") * 2 +
              (formtype == "shrubbery creation") * 3;
  AForm *(Intern::*f[])(std::string &) = {
      &Intern::Formerror,
      &Intern::newRobotomy,
      &Intern::newPresidential,
      &Intern::newShrubbery,
  };
  return ((this->*f[index])(form));
}
