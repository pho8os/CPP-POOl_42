/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:41:05 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 09:24:55 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap deimos("Deimos");
    DiamondTrap phobos("Phobos");

    phobos.whoAmI();
    deimos.whoAmI();
    phobos.guardGate();
    phobos.attack(deimos.getName());
    deimos.takeDamage(phobos.getAttackdmg());
    deimos.beRepaired(2);
    deimos.attack(phobos.getName());
    phobos.takeDamage(deimos.getAttackdmg());
    phobos.guardGate();
    phobos.attack(deimos.getName());
    deimos.takeDamage(phobos.getAttackdmg());
    phobos.highFivesGuys();

}