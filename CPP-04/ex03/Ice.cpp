/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:41:44 by absaid            #+#    #+#             */
/*   Updated: 2023/09/26 10:28:46 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice &obj) { *this = obj; }
Ice &Ice::operator=(const Ice &obj) {
  if (this != &obj)
    this->type = obj.type;
  return (*this);
}

Ice::~Ice() {}

AMateria *Ice::clone() const { return (new Ice()); }

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}