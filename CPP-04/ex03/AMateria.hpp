/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:15:11 by absaid            #+#    #+#             */
/*   Updated: 2023/09/27 21:46:22 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &obj);
        AMateria &operator=(const AMateria &obj);
        virtual ~AMateria();
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

};