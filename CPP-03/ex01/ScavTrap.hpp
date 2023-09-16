/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:42:17 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 06:37:17 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    protected:
        bool GuardGate;
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap &obj);
        ScavTrap &operator=(const ScavTrap &obj);
        void attack(const std::string& target) ;
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void guardGate();
};