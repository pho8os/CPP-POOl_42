/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:39:45 by absaid            #+#    #+#             */
/*   Updated: 2023/10/05 00:55:04 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default") {
  sign = false;
  signGrade = 1;
  execGrade = 1;
  std::cout << "Form : Default Constructor Called" << std::endl;
}

Form::~Form() { std::cout << "Form : Destructor Called" << std::endl; }

Form::Form(const Form &obj)
    : name(obj.name), sign(obj.sign), signGrade(obj.signGrade),
      execGrade(obj.execGrade) {
  std::cout << "Form : Copy Constructor Called" << std::endl;
}

Form::Form(const std::string &name, int signGrade, int execGrade)
    : name(name), sign(false), signGrade(signGrade), execGrade(execGrade) {
  std::cout << "Form : Parametrized Constructor Called" << std::endl;
  if (signGrade < 1 || execGrade < 1)
    throw(GradeTooHighException());
  if (signGrade > 150 || execGrade > 150)
    throw(GradeTooLowException());
}

Form &Form::operator=(const Form &obj) {
  (this != &obj) && (this->signGrade = obj.signGrade, this->sign = obj.sign,
                     this->execGrade = obj.execGrade);
  return (*this);
}

void Form::beSigned(const Bureaucrat &mark) {
  if (this->signGrade > mark.getGrade())
    this->sign = true;
}

std::string Form::getName() const { return (this->name); }
int Form::getSignGrade() const { return (this->signGrade); }

const char *Form::GradeTooHighException::what() const throw() {
  return ("Grade Too High");
}
const char *Form::GradeTooLowException::what() const throw() {
  return ("Grade Too Low");
}