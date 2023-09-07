/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:30:37 by absaid            #+#    #+#             */
/*   Updated: 2023/09/06 15:56:12 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string Name)
{
    name = Name;
    weapon = NULL;
}

void HumanB::attack()
{
    std::cout << name << " attacks";
    if(weapon)
        std::cout << " with their " << weapon->getType();
    std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    weapon = &Weapon;
}