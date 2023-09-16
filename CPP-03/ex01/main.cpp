/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:41:05 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 09:19:28 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
  ScavTrap a("Phobos");
  ScavTrap b("Deimos");

  a.attack(b.getName());
  b.takeDamage(a.getAttackdmg());
  a.guardGate();
  b.attack(a.getName());
  a.takeDamage(b.getAttackdmg());
  a.attack(b.getName());
  b.takeDamage(a.getAttackdmg());
  b.attack(a.getName());
  a.takeDamage(b.getAttackdmg());
  a.attack(b.getName());
  b.takeDamage(a.getAttackdmg());
  a.guardGate();
}