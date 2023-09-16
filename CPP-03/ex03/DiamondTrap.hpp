/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 06:23:21 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 08:13:25 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap,public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string Name);
        DiamondTrap(const DiamondTrap &obj);
        DiamondTrap &operator=(const DiamondTrap &obj);
        void attack(const std::string& target);
        void whoAmI();
};