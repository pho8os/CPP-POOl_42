/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:37:39 by absaid            #+#    #+#             */
/*   Updated: 2023/09/06 15:59:12 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
class Weapon 
{
    private:
        std::string type;
    public:
    std::string const &getType();
    Weapon(std::string Type);
    void setType(std::string Type);
};