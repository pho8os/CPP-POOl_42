/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 06:39:47 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 08:08:18 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {

  std::cout << "DiamondTrap : Default Constructor Called" << std::endl;
  this->Name = "Default_clap_name";
  this->_name = "Default";
  this->HitPoints = FragTrap::HitPoints;
  this->EnergyPoints = ScavTrap::EnergyPoints;
  this->Attackdmg = FragTrap::Attackdmg;
}

DiamondTrap::DiamondTrap(std::string Name)
    : ClapTrap(Name + "_clap_name"), ScavTrap(Name), FragTrap(Name) {
  std::cout << "DiamondTrap : Name Constructor Called" << std::endl;
  this->_name = Name;
  this->HitPoints = FragTrap::HitPoints;
  this->EnergyPoints = ScavTrap::EnergyPoints;
  this->Attackdmg = FragTrap::Attackdmg;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) {
  std::cout << "DiamondTrap : Copy Constructor Called" << std::endl;
  *this = obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj) {
  this->Name = obj.getName();
  this->EnergyPoints = obj.getEnergyPoints();
  this->HitPoints = obj.getHitPoints();
  this->Attackdmg = obj.getAttackdmg();
  return (*this);
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap : Destructor Called" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
  std::cout << "DiamondTrap : "<< this->_name << " steps into the light." << std::endl;
}