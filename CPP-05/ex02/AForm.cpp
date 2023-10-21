/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:39:45 by absaid            #+#    #+#             */
/*   Updated: 2023/10/05 00:55:04 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default"), signGrade(1), execGrade(1) {
  sign = false;
  // std::cout << "AForm : Default Constructor Called" << std::endl;
}

AForm::~AForm() { /*std::cout << "AForm : Destructor Called" << std::endl; */}

AForm::AForm(const AForm &obj)
    : name(obj.name), sign(obj.sign), signGrade(obj.signGrade),
      execGrade(obj.execGrade) {
  // std::cout << "AForm : Copy Constructor Called" << std::endl;
}

AForm::AForm(const std::string &name, int signGrade, int execGrade)
    : name(name), sign(false), signGrade(signGrade), execGrade(execGrade) {
  // std::cout << "AForm : Parametrized Constructor Called" << std::endl;
  if (signGrade < 1 || execGrade < 1)
    throw(GradeTooHighException());
  if (signGrade > 150 || execGrade > 150)
    throw(GradeTooLowException());
}

AForm &AForm::operator=(const AForm &obj) {
  (this != &obj) && (this->sign = obj.sign);
  return (*this);
}

void AForm::beSigned(const Bureaucrat &mark) {
  if (this->signGrade >= mark.getGrade())
    this->sign = true;
  else
    throw(GradeTooLowException());
}

std::string AForm::getName() const { return (this->name); }

int AForm::getExecGrade() const { return (this->execGrade); }

bool AForm::getSign() const { return (this->sign); }

int AForm::getSignGrade() const { return (this->signGrade); }

void AForm::setSign(bool sign) { this->sign = sign; }

const char *AForm::GradeTooHighException::what() const throw() {
  return ("Grade Too High");
}
const char *AForm::GradeTooLowException::what() const throw() {
  return ("Grade Too Low");
}
std::ostream &operator<<(std::ostream &output, const AForm &obj) {
  output << "Form: " << obj.getName()
         << " ,grade to be executed: " << obj.getExecGrade()
         << " ,grade to be signed: " << obj.getSignGrade();
  if (obj.getSign())
    output << " , and it's signed.";
  else
    output << " , and it's not signed yet.";
  return(output);
}