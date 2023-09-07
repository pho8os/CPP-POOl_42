/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:25:15 by absaid            #+#    #+#             */
/*   Updated: 2023/09/06 15:59:09 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string Type)
{
    type = Type;
}

std::string const &Weapon::getType()
{
    return(type);
}

void Weapon::setType(std::string Type)
{
    type = Type;
}