/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:19:01 by absaid            #+#    #+#             */
/*   Updated: 2023/09/24 09:02:16 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
  std::cout << "AMateria : Default Constructor Called" << std::endl;
}

AMateria::AMateria(std::string const &type) {
  std::cout << "AMateria : Parametrized Constructor Called" << std::endl;
  this->type = type;
}

AMateria::~AMateria() {
  std::cout << "AMateria : Destructor Called" << std::endl;
}
AMateria::AMateria(const AMateria &obj) {
  std::cout << "AMateria : Copy Constructor Called" << std::endl;
  *this = obj;
}
AMateria &AMateria::operator=(const AMateria &obj) {
  if (this != &obj)
    this->type = obj.type;
  return (*this);
}

std::string const &AMateria::getType() const { return (this->type); }

void AMateria::use(ICharacter& target)
{
  (void)target;
}