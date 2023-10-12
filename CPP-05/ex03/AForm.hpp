/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:55:58 by absaid            #+#    #+#             */
/*   Updated: 2023/10/12 05:04:41 by absaid           ###   ########.fr       */
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
  virtual ~AForm();
  AForm(const std::string &name, int signGrade, int execGrade);


  std::string getName() const;
  int getSignGrade() const ;
  int getExecGrade() const ;
  int getSign() const ;
  
  void setSignGrade(int grade);
  void setExecGrade(int grade);
  void setSign(bool sign);


  void beSigned(const Bureaucrat &mark);
  virtual void execute(Bureaucrat const & executor) const = 0;
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