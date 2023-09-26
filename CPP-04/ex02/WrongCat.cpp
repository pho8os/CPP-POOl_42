
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:51:54 by absaid            #+#    #+#             */
/*   Updated: 2023/09/19 23:06:41 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat : Default Constructor Called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj)
{
    *this = obj;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : Destructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    this->type = obj.type;
    return(*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Not Meow" << std::endl;
}