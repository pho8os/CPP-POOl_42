/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:55:58 by absaid            #+#    #+#             */
/*   Updated: 2023/10/05 15:56:43 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
private:
  const std::string name;
  bool sign;
  int signGrade;
  int execGrade;
public:
  AForm();
  AForm(const AForm &obj);
  AForm &operator=(const AForm &obj);
  ~AForm();

  AForm(const std::string &name, int signGrade, int execGrade);
  std::string getName() const;
  int getSignGrade() const ;
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