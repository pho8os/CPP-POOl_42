/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:03:41 by absaid            #+#    #+#             */
/*   Updated: 2023/09/06 16:42:50 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include"HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("Fear");
        HumanA bob("phobos", club);
        bob.attack();
        club.setType("Panic");
        bob.attack();
    }
    {
        Weapon club = Weapon("Dread");
        HumanB jim("deimos");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Terror");
        jim.attack();
    }
    return 0;
}