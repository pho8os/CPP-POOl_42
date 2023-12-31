/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 21:30:30 by absaid            #+#    #+#             */
/*   Updated: 2023/10/13 11:10:43 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &name)
    : AForm(name, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
    : AForm(obj.getName(), obj.getSignGrade(), obj.getExecGrade()) {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
  (this != &obj) && (this->setSign(obj.getSign()), 0);
  return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
  if (executor.getGrade() <= this->getExecGrade()) {
    std::cout << "Shrubbery Created: check the file" << std::endl;
    if(!std::freopen((executor.getName() + "_shrubbery").c_str(), "w+", stdout))
        return(std::cerr << "Error" << std::endl, (void)0);
    std::cout << "       _-_" << std::endl;
    std::cout << "    /~~   ~~\\" << std::endl;
    std::cout << " /~~         ~~\\" << std::endl;
    std::cout << "{               }" << std::endl;
    std::cout << " \\  _-     -_  /" << std::endl;
    std::cout << "   ~  \\\\ //  ~" << std::endl;
    std::cout << "       | |     " << std::endl;
    std::cout << "       | |     " << std::endl;
    std::cout << "      // \\\\" << std::endl;
  } else
    throw(GradeTooLowException());
}
