/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:57:32 by absaid            #+#    #+#             */
/*   Updated: 2023/10/12 05:00:32 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
  const std::string name;
  bool sign;
  int signGrade;
  int execGrade;
public:
  Form();
  Form(const Form &obj);
  Form &operator=(const Form &obj);
  ~Form();

  Form(const std::string &name, int signGrade, int execGrade);
  std::string getName() const;
  int getExecGrade() const ;
  int getSignGrade() const ;
  bool getSign() const ;
  void beSigned(const Bureaucrat &mark);
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
std::ostream &operator<<(std::ostream &output, const Form &obj);