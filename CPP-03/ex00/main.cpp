/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:41:05 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 09:18:36 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Phobos");
    ClapTrap b("Deimos");

    a.attack(b.getName());
    b.takeDamage(11);
    b.attack(a.getName());
    a.takeDamage(b.getAttackdmg());
    a.beRepaired(2);
    b.beRepaired(2);
}