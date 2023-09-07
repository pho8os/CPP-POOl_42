/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:28:52 by absaid            #+#    #+#             */
/*   Updated: 2023/09/06 15:54:07 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"Weapon.hpp"

HumanA::HumanA(std::string Name, Weapon &Weapon): weapon(Weapon), name(Name){}

void HumanA::attack()
{
    std::cout << name << " attacks" << " with their " << weapon.getType() << std::endl;
}