/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 02:48:04 by absaid            #+#    #+#             */
/*   Updated: 2023/09/16 06:37:45 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &obj);
        FragTrap &operator=(const FragTrap &obj);
        void attack(const std::string& target) ;
        void highFivesGuys(void);
};