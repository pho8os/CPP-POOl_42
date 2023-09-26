/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:41:44 by absaid            #+#    #+#             */
/*   Updated: 2023/09/26 10:28:25 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure &obj) { *this = obj; }
Cure &Cure::operator=(const Cure &obj) {
  if (this != &obj)
    this->type = obj.type;
  return (*this);
}

Cure::~Cure() {}

AMateria *Cure::clone() const { return (new Cure()); }

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}