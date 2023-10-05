/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:39:45 by absaid            #+#    #+#             */
/*   Updated: 2023/10/05 00:55:04 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default") {
  sign = false;
  signGrade = 1;
  execGrade = 1;
  std::cout << "AForm : Default Constructor Called" << std::endl;
}

AForm::~AForm() { std::cout << "AForm : Destructor Called" << std::endl; }

AForm::AForm(const AForm &obj)
    : name(obj.name), sign(obj.sign), signGrade(obj.signGrade),
      execGrade(obj.execGrade) {
  std::cout << "AForm : Copy Constructor Called" << std::endl;
}

AForm::AForm(const std::string &name, int signGrade, int execGrade)
    : name(name), sign(false), signGrade(signGrade), execGrade(execGrade) {
  std::cout << "AForm : Parametrized Constructor Called" << std::endl;
  if (signGrade < 1 || execGrade < 1)
    throw(GradeTooHighException());
  if (signGrade > 150 || execGrade > 150)
    throw(GradeTooLowException());
}

AForm &AForm::operator=(const AForm &obj) {
  (this != &obj) && (this->signGrade = obj.signGrade, this->sign = obj.sign,
                     this->execGrade = obj.execGrade);
  return (*this);
}

void AForm::beSigned(const Bureaucrat &mark) {
  if (this->signGrade > mark.getGrade())
    this->sign = true;
}

std::string AForm::getName() const { return (this->name); }
int AForm::getSignGrade() const { return (this->signGrade); }

const char *AForm::GradeTooHighException::what() const throw() {
  return ("Grade Too High");
}
const char *AForm::GradeTooLowException::what() const throw() {
  return ("Grade Too Low");
}