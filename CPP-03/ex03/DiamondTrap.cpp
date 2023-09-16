/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 06:39:47 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 18:16:55 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap( "Default_clap_name")  {

  std::cout << "DiamondTrap : Default Constructor Called" << std::endl;
  this->Name = "Default";
  this->HitPoints = FragTrap::HitPoints;
  this->EnergyPoints = ScavTrap::EnergyPoints;
  this->Attackdmg = FragTrap::Attackdmg;
}

DiamondTrap::DiamondTrap(std::string Name)
    : ClapTrap(Name + "_clap_name") {
  std::cout << "DiamondTrap : Name Constructor Called" << std::endl;
  this->Name = Name;
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
  std::cout << "DiamondTrap : "<< this->Name << " " << ClapTrap::Name << " steps into the light." << std::endl;
}