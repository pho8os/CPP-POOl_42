/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 05:53:25 by absaid            #+#    #+#             */
/*   Updated: 2023/09/27 21:30:41 by absaid           ###   ########.fr       */
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

Character::Character(const Character &obj) { 
  *this = obj; 
  }

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
  std::cout << "here" << std::endl;
  return (*this);
}

Character::~Character() {
  for (int i = 0; i < 4; i++)
    delete ability[i];
}

std::string const &Character::getName() const { return (this->name); }

void Character::equip(AMateria *m) {
  for (int i = 0; i < 4; i++)
    if (!this->ability[i]) {
      this->ability[i] = m->clone();
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
  this->ability[idx]->use(target);
}