/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:16:26 by absaid            #+#    #+#             */
/*   Updated: 2023/10/09 20:59:48 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <new>

Cat::Cat() {
  type = "cat";
  this->brain = new Brain();
  for (int i = 0; i < 100; i++)
    this->brain->setidea(i, "Fiiiiiish");
  std::cout << "Cat : Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat &obj) {
  this->type = obj.type;
  this->brain = new Brain(); 
  for (int i = 0; i < 100; i++)
    this->brain->setidea(i, obj.brain->getidea(i));
}

Cat::~Cat() {
  delete brain;
  std::cout << "Cat : Destructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj) {
  if (this != &obj) {
    this->type = obj.type;
    delete this->brain;
    this->brain = new Brain();
    *this->brain = *obj.brain;
  }
  return (*this);
}

void Cat::makeSound() const { std::cout << "Meeooow" << std::endl; }