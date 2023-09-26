/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 05:31:38 by absaid            #+#    #+#             */
/*   Updated: 2023/09/21 08:48:25 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
  std::cout << "Brain : Default Constructor Called" << std::endl;
  for (int i = 0; i < 100; i++)
    this->ideas[i] = "Thinking";
}

Brain::Brain(const std::string &idea) {
  std::cout << "Brain : Paramertized Constructor Called" << std::endl;
  for (int i = 0; i < 100; i++)
    this->ideas[i] = idea;
}

Brain::Brain(const Brain &obj) { *this = obj; }

Brain &Brain::operator=(const Brain &obj) {
  if (this != &obj)
    for (int i = 0; i < 100; i++)
      this->ideas[i] = obj.ideas[i];
  return (*this);
}

Brain::~Brain() { std::cout << "Brain : Destructor Called" << std::endl; }
std::string Brain::getidea(int index) const {
  if (index > 100 || index < 0)
    return (std::cerr << "Get : Invalid Index" << std::endl, this->ideas[0]);
  return (this->ideas[index]);
}
void Brain::setidea(int index, const std::string &idea) {
  if (index > 100 || index < 0)
    return (std::cout << "Set : Invalid Index" << std::endl, (void)0);
  this->ideas[index] = idea;
}