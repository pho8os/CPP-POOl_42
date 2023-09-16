/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:41:05 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 09:13:10 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap scav("Phobos");
    FragTrap frag("Deimos");

    frag.highFivesGuys();
    scav.guardGate();
    frag.attack(scav.getName());
    scav.takeDamage(scav.getAttackdmg());
    scav.guardGate();
    scav.attack(frag.getName());
    frag.takeDamage(scav.getAttackdmg());
    
}