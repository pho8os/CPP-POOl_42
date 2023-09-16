/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:22:30 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 09:17:20 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name) : Name(Name) {
  std::cout << "ClapTrap : Name Constructor Called" << std::endl;
  this->HitPoints = 10;
  this->EnergyPoints = 10;
  this->Attackdmg = 0;
}

ClapTrap::ClapTrap() {
  std::cout << "ClapTrap : Default Constructor Called" << std::endl;
  this->Name = "Default";
  this->HitPoints = 10;
  this->EnergyPoints = 10;
  this->Attackdmg = 0;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap : Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
  std::cout << "ClapTrap : Copy Constructor Called" << std::endl;
  *this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
  if (this != &obj) {
    this->Name = obj.getName();
    this->HitPoints = obj.getHitPoints();
    this->EnergyPoints = obj.getEnergyPoints();
    this->Attackdmg = obj.getAttackdmg();
  }
  return (*this);
}

std::string ClapTrap::getName() const { return (this->Name); }

int ClapTrap::getHitPoints() const { return (this->HitPoints); }

int ClapTrap::getEnergyPoints() const { return (this->EnergyPoints); }

int ClapTrap::getAttackdmg() const { return (this->Attackdmg); }
// ClapTrap <name> attacks <target>, causing <damage> points of damage!
void ClapTrap::attack(const std::string &target) {
  if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
    return;
  std::cout << "ClapTrap : " << this->Name << " attacks " << target
            << ", causing " << this->Attackdmg << " points of damage!"
            << std::endl;
  this->EnergyPoints -= 1;
}
// The hero takes 100 damage from the orc's axe, but remains standing.
void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap : " << this->Name << " takes " << amount << " damage";
  this->HitPoints -= amount;
  if (this->HitPoints <= 0) {
    std::cout << " and he is dead." << std::endl;
    this->HitPoints = 0;
  } else
    std::cout << " but remains standing." << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
  if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
    return;
  std::cout << "ClapTrap : " << this->Name
            << " drinks a healing potion, restoring " << amount << " HitPoints"
            << std::endl;
  this->HitPoints += amount;
  this->EnergyPoints -= 1;
}
