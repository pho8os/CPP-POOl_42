/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:42:56 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 01:13:37 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int HitPoints;
        int EnergyPoints;
        int Attackdmg;
    public:
        /*-----------------------OCCF-----------------------*/
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap &obj);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &obj);
        /*----------------------GET------------------------*/
        std::string getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const ;
        int getAttackdmg() const;
        /*----------------------MEMBERF------------------------*/
        void attack(const std::string& target) ;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};