/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:51:54 by absaid            #+#    #+#             */
/*   Updated: 2023/09/21 09:04:03 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Animal : Default Constructor Called" << std::endl;
    type = "Animal";
}

AAnimal::AAnimal(const AAnimal &obj)
{
    *this = obj;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal : Destructor Called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &obj)
{
    if(this != &obj)
        this->type = obj.type;
    return(*this);
}

void AAnimal::makeSound() const
{
    std::cout << "Animalsound" << std::endl;
}

std::string AAnimal::getType() const
{
    return this->type;
}