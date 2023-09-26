/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:51:54 by absaid            #+#    #+#             */
/*   Updated: 2023/09/23 14:41:40 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal : Default Constructor Called" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
}

Animal::~Animal()
{
    std::cout << "Animal : Destructor Called" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
    if(this != &obj)
        this->type = obj.type;
    return(*this);
}

void Animal::makeSound() const
{
    std::cout << "Animalsound" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}