/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 22:08:27 by absaid            #+#    #+#             */
/*   Updated: 2023/10/11 22:32:42 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
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