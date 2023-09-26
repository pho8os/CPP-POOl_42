/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:51:54 by absaid            #+#    #+#             */
/*   Updated: 2023/09/19 23:06:41 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal : Default Constructor Called" << std::endl;
    type = "Animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    *this = obj;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal : Destructor Called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    this->type = obj.type;
    return(*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "animaln't" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}