/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:00:49 by absaid            #+#    #+#             */
/*   Updated: 2023/09/21 10:01:20 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
  type = "Dog";
  this->brain = new (std::nothrow) Brain();
  if (!this->brain)
    std::cerr << "error : Allocation Failed" << std::endl;
  for (int i = 0; i < 100; i++)
    this->brain->setidea(i, "Booooones");
  std::cout << "Dog : Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog &obj) {
  this->type = obj.type;
  this->brain = new (std::nothrow) Brain();
  if (!this->brain)
    std::cerr << "error : Allocation Failed" << std::endl;
  for (int i = 0; i < 100; i++)
    this->brain->setidea(i, obj.brain->getidea(i));
}

Dog::~Dog() {
  delete brain;
  std::cout << "Dog : Destructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj) {
  if (this != &obj) {
    this->type = obj.type;
    delete this->brain;
    this->brain = new (std::nothrow) Brain();
    if (!this->brain)
      std::cerr << "error : Allocation Failed" << std::endl;
    for (int i = 0; i < 100; i++)
      this->brain->setidea(i, obj.brain->getidea(i));
  }
  return (*this);
}

void Dog::makeSound() const { std::cout << "Woof!" << std::endl; }

std::string Dog::getBrainIdea(int index) const {
  return (this->brain->getidea(index));
}