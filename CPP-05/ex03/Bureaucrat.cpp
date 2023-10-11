/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:04:04 by absaid            #+#    #+#             */
/*   Updated: 2023/10/11 20:06:48 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default") {
  this->grade = 1;
  // std::cout << "Bureaucrat : Default Constructor Called";
}

Bureaucrat::~Bureaucrat() {
  // std::cout << "Bureaucrat : Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
    : name(name), grade(grade) {
  // std::cout << "Bureaucrat : Parametrized Constructor Called" << std::endl;
  if (grade < 1)
    throw(GradeTooHighException());
  else if (grade > 150)
    throw(GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
    : name(obj.name), grade(obj.grade) {
  // std::cout << "Bureaucrat : Copy Constructor Called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
  (this != &obj) && (this->grade = obj.grade);
  return (*this);
}

std::string Bureaucrat::getName() const { return (this->name); }

int Bureaucrat::getGrade() const { return (this->grade); }

void Bureaucrat::increment() {
  this->grade--;
  if (grade < 1)
    throw(GradeTooHighException());
}

void Bureaucrat::decrement() {
  this->grade++;
  if (grade > 150)
    throw(GradeTooLowException());
}

void Bureaucrat::signForm(AForm &form) {
  try {
    form.beSigned(*this);
    std::cout << this->name << " signed " << form.getName() << std::endl;
  } catch (std::exception &e) {
    std::cout << this->name << " couldn't sign " << form.getName()
              << " because " << e.what() << std::endl;
  }
}

void Bureaucrat::executeForm(AForm const &form) {
  try {
    form.execute(*this);
  } catch (std::exception &e) {
    std::cout << this->name << " cannot execute " << form.getName()
              << " because " << e.what() << std::endl;
  }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Grade Too High");
}
const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade Too Low");
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj) {
  output << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
  return (output);
}