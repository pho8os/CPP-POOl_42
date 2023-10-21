/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:10:19 by absaid            #+#    #+#             */
/*   Updated: 2023/10/13 11:07:49 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <cstddef>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &name)
    : AForm(name, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
    : AForm(obj.getName(), obj.getSignGrade(), obj.getExecGrade()) {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
  (this != &obj) && (this->setSign(obj.getSign()), 0);
  return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
  if (executor.getGrade() <= this->getExecGrade()) {
    srand(time(NULL));
    if (rand() % 2)
      std::cout << executor.getName() << " has been robotomized successfully."
                << std::endl;
    else
      std::cout << executor.getName() << " failed robotomaizing"
                << std::endl;
  } else
    throw(GradeTooLowException());
}
