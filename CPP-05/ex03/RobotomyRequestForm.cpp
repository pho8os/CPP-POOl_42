/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:10:19 by absaid            #+#    #+#             */
/*   Updated: 2023/10/12 00:45:08 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &name)
    : AForm(name, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
    : AForm(obj.getName(), obj.getSignGrade(), obj.getExecGrade()) {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
  (this != &obj) &&
      (this->setSign(obj.getSign()), this->setExecGrade(obj.getExecGrade()),
       this->setSignGrade(obj.getSignGrade()), 0);
  return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
  if (executor.getGrade() <= this->getExecGrade()) {
    static bool rand;
    rand = !rand;
    if (rand)
      std::cout << executor.getName() << " has been robotomized successfully."
                << std::endl;
    else
      std::cout << executor.getName() << " failed robotomaizing"
                << std::endl;
  } else
    throw(GradeTooLowException());
}
