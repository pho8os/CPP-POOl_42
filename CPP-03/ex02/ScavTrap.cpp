/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:54:25 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 09:15:35 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() {
  std::cout << "ScavTrap : Default Constructor Called" << std::endl;
  this->GuardGate = false;
  this->HitPoints = 100;
  this->EnergyPoints = 50;
  this->Attackdmg = 20;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
  std::cout << "ScavTrap : Name Constructor Called" << std::endl;
  this->GuardGate = false;
  this->HitPoints = 100;
  this->EnergyPoints = 50;
  this->Attackdmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) {
  std::cout << "ScavTrap : Copy Constructor Called" << std::endl;
  *this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
  this->Name = obj.getName();
  this->GuardGate = obj.GuardGate;
  this->EnergyPoints = obj.getEnergyPoints();
  this->HitPoints = obj.getHitPoints();
  this->Attackdmg = obj.getAttackdmg();
  return (*this);
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap : Destructor Called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
    return;
  std::cout << "ScavTrap : " << this->Name << " attacks " << target
            << ", causing " << this->Attackdmg << " points of damage!"
            << std::endl;
  this->EnergyPoints -= 1;
}

void ScavTrap::takeDamage(unsigned int amount) {
  if (this->GuardGate) {
    std::cout << "🛡️ ScavTrap : " << this->Name
              << "'s Guardgate ability absorbed the damage." << std::endl;
    return;
  }
  std::cout << "ScavTrap : " << this->Name << " takes " << amount << " damage";
  this->HitPoints -= amount;
  if (this->HitPoints <= 0) {
    std::cout << " and he is dead." << std::endl;
    this->HitPoints = 0;
  } else
    std::cout << " but remains standing." << std::endl;
}

void ScavTrap::guardGate() {
  if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
    return;
  this->GuardGate = !this->GuardGate;
  (this->GuardGate) && (std::cout << "ScavTrap : " << this->Name
                                  << " unleashed his GuardGate" << std::endl);
  (!this->GuardGate) && (std::cout << "ScavTrap : " << this->Name
                                   << " put away his GuardGate" << std::endl);
  (this->GuardGate) && (this->EnergyPoints -= 5);
}