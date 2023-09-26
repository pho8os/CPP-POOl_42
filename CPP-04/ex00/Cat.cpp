/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 22:16:26 by absaid            #+#    #+#             */
/*   Updated: 2023/09/19 23:06:37 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat : Default Constructor Called" << std::endl;
    type = "cat";
}

Cat::Cat(const Cat &obj)
{
    *this = obj;
}

Cat::~Cat()
{
    std::cout << "Cat : Destructor Called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    this->type = obj.type;
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "Meeooow" << std::endl;
}