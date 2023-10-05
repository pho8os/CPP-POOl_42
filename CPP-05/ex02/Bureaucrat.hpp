/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:29:50 by absaid            #+#    #+#             */
/*   Updated: 2023/10/05 15:59:51 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <exception>
#include <iostream>

class AForm;

class Bureaucrat {
private:
  const std::string name;
  int grade;

public:
  Bureaucrat();
  Bureaucrat(const Bureaucrat &obj);
  Bureaucrat(const std::string &name, int grade);
  Bureaucrat &operator=(const Bureaucrat &obj);
  ~Bureaucrat();
  std::string getName() const;
  int getGrade() const;
  void increment();
  void decrement();
  void signForm(const AForm &form);
  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj);