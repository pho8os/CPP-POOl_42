/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:08:27 by absaid            #+#    #+#             */
/*   Updated: 2023/10/13 11:25:27 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
  AForm *newShrubbery(std::string &form);
  AForm *newRobotomy(std::string &form);
  AForm *newPresidential(std::string &form);
  AForm *Formerror(std::string &form);
public:
  Intern();
  Intern(const Intern &obj);
  Intern &operator=(const Intern &obj);
  ~Intern();
  AForm *makeForm(std::string formtype, std::string form);
  class WrongFormException : public std::exception {
  public:
    const char *what() const throw();
  };
};