/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:39:45 by absaid            #+#    #+#             */
/*   Updated: 2023/10/13 11:01:59 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"),signGrade(1), execGrade(1) {
  sign = false;
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
  (this != &obj) && (this->sign = obj.sign);
  return (*this);
}

void Form::beSigned(const Bureaucrat &mark) {
  if (this->signGrade >= mark.getGrade())
    this->sign = true;
  else
    throw(GradeTooLowException());
}

std::string Form::getName() const { return (this->name); }
int Form::getSignGrade() const { return (this->signGrade); }
int Form::getExecGrade() const { return (this->execGrade); }

bool Form::getSign() const { return (this->sign); }


const char *Form::GradeTooHighException::what() const throw() {
  return ("Grade Too High");
}
const char *Form::GradeTooLowException::what() const throw() {
  return ("Grade Too Low");
}

std::ostream &operator<<(std::ostream &output, const Form &obj) {
  output << "Form: " << obj.getName()
         << " ,grade to be executed: " << obj.getExecGrade()
         << " ,grade to be signed: " << obj.getSignGrade();
  if (obj.getSign())
    output << " , and it's signed.";
  else
    output << " , and it's not signed yet.";
  return(output);
}