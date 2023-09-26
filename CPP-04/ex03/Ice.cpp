/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:41:44 by absaid            #+#    #+#             */
/*   Updated: 2023/09/23 14:49:16 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice : Default Constructor Called" << std::endl;
}
Ice::Ice(const Ice &obj)
{
    std::cout << "Ice : Copy Constructor Called" << std::endl;
    *this = obj;
}
Ice &Ice::operator=(const Ice &obj)
{
    if(this != &obj)
        this->type = obj.type;
    return(*this);
}

Ice::~Ice()
{
    std::cout << "Ice : Destructor Called" << std::endl;
}

AMateria *Ice::clone() const
{
    return(new Ice());
}

void Ice::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}