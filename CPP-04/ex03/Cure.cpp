/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:41:44 by absaid            #+#    #+#             */
/*   Updated: 2023/09/23 14:47:32 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure : Default Constructor Called" << std::endl;
}
Cure::Cure(const Cure &obj)
{
    std::cout << "Cure : Copy Constructor Called" << std::endl;
    *this = obj;
}
Cure &Cure::operator=(const Cure &obj)
{
    if(this != &obj)
        this->type = obj.type;
    return(*this);
}

Cure::~Cure()
{
    std::cout << "Cure : Destructor Called" << std::endl;
}

AMateria *Cure::clone() const
{
    return(new Cure());
}

void Cure::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}