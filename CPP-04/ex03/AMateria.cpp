/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:19:01 by absaid            #+#    #+#             */
/*   Updated: 2023/09/26 10:27:58 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) { this->type = type; }

AMateria::~AMateria() {}
AMateria::AMateria(const AMateria &obj) { *this = obj; }
AMateria &AMateria::operator=(const AMateria &obj) {
  if (this != &obj)
    this->type = obj.type;
  return (*this);
}

std::string const &AMateria::getType() const { return (this->type); }

void AMateria::use(ICharacter &target) { (void)target; }