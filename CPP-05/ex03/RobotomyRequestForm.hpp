/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:07:31 by absaid            #+#    #+#             */
/*   Updated: 2023/10/11 21:23:53 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
public:
  RobotomyRequestForm();
  RobotomyRequestForm(std::string const &name);
  ~RobotomyRequestForm();
  RobotomyRequestForm(const RobotomyRequestForm &obj);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
  void execute(Bureaucrat const &executor) const;
};