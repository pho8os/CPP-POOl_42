/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 02:49:09 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 09:15:13 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
  std::cout << "FragTrap : Default Constructor Called" << std::endl;
  this->HitPoints = 100;
  this->EnergyPoints = 100;
  this->Attackdmg = 30;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
  std::cout << "FragTrap : Name Constructor Called" << std::endl;
  this->HitPoints = 100;
  this->EnergyPoints = 100;
  this->Attackdmg = 30;
}

FragTrap::FragTrap(const FragTrap &obj) {
  std::cout << "FragTrap : Copy Constructor Called" << std::endl;
  *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
  this->Name = obj.getName();
  this->EnergyPoints = obj.getEnergyPoints();
  this->HitPoints = obj.getHitPoints();
  this->Attackdmg = obj.getAttackdmg();
  return (*this);
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap : Destructor Called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
  if (this->EnergyPoints < 0 || this->HitPoints < 0)
    return;
  std::cout << "FragTrap : " << this->Name << " attacks " << target
            << ", causing " << this->Attackdmg << " points of damage!"
            << std::endl;
  this->EnergyPoints -= 1;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap : " << this->Name
            << " spreads joy and high fives all around!" << std::endl;
}