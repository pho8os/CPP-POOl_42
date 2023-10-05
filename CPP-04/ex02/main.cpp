/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:01:15 by absaid            #+#    #+#             */
/*   Updated: 2023/09/29 09:34:22 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"


int main()
{
const AAnimal* j = new Dog();
const AAnimal* i = new Cat();
i->makeSound();
j->makeSound();

std::cout << i->getBrainIdea(0) << std::endl;
std::cout << j->getBrainIdea(69) << std::endl;

delete j;
delete i;

return 0;
}