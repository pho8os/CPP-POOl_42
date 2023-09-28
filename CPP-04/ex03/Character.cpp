/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 05:53:25 by absaid            #+#    #+#             */
/*   Updated: 2023/09/28 09:05:25 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Default") {
  for (int i = 0; i < 4; i++)
    this->ability[i] = NULL;
}
Character::Character(const std::string &name) : name(name) {
  for (int i = 0; i < 4; i++)
    this->ability[i] = NULL;
}

Character::Character(const Character &obj) { *this = obj; }

Character &Character::operator=(const Character &obj) {
  this->name = obj.getName();
  for (int i = 0; i < 4; i++) {
    delete this->ability[i];
    this->ability[i] = NULL;
  }
  for (int i = 0; i < 4; i++) {
    if (obj.ability[i])
      this->ability[i] = obj.ability[i]->clone();
  }
  return (*this);
}

Character::~Character() {}

std::string const &Character::getName() const { return (this->name); }

void Character::equip(AMateria *m) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (m == ability[j])
        return;
    }
    this->ability[i] = m;
    if (!this->ability[i])
      break;
  }
}

void Character::unequip(int idx) {
  if (idx >= 0 && idx <= 3)
    this->ability[idx] = NULL;
  else
    std::cout << "Invalid idx" << std::endl;
}

void Character::use(int idx, ICharacter &target) {

  if (idx >= 0 && idx <= 3 && ability[idx])
    this->ability[idx]->use(target);
}