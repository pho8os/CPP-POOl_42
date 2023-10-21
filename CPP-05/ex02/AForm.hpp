/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:55:58 by absaid            #+#    #+#             */
/*   Updated: 2023/10/13 11:06:09 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {
private:
  const std::string name;
  bool sign;
  const int signGrade;
  const int execGrade;

public:
  AForm();
  AForm(const AForm &obj);
  AForm &operator=(const AForm &obj);
  virtual ~AForm();
  AForm(const std::string &name, int signGrade, int execGrade);

  std::string getName() const;
  int getSignGrade() const;
  int getExecGrade() const;
  bool getSign() const;

  void setSign(bool sign);

  void beSigned(const Bureaucrat &mark);
  virtual void execute(Bureaucrat const &executor) const = 0;
  /*-----------------------------------------------*/
  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };
  /*-----------------------------------------------*/
  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };
};
std::ostream &operator<<(std::ostream &output, const AForm &obj);