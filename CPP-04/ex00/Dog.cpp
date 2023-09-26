/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:00:49 by absaid            #+#    #+#             */
/*   Updated: 2023/09/20 00:20:43 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog : Default Constructor Called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
}

Dog::~Dog()
{
    std::cout << "Dog : Destructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    this->type = obj.type;
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}