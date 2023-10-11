/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:33:29 by absaid            #+#    #+#             */
/*   Updated: 2023/10/11 21:32:42 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &name)
    : AForm(name, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &obj)
    : AForm(obj.getName(), obj.getSignGrade(), obj.getExecGrade()) {}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
  (this != &obj) &&
      (this->setSign(obj.getSign()), this->setExecGrade(obj.getExecGrade()),
       this->setSignGrade(obj.getSignGrade()), 0);
  return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  if (executor.getGrade() <= this->getExecGrade())
    std::cout << executor.getName()
              << " has been pardoned by Zaphod Beeblebrox." << std::endl;
  else
    throw(GradeTooLowException());
}
