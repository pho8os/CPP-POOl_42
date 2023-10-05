/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:01:15 by absaid            #+#    #+#             */
/*   Updated: 2023/09/29 09:32:09 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"


int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
const Animal* a = new Animal();
i->makeSound();
j->makeSound();
a->makeSound();
delete j;//should not create a leak
delete i;
delete a;

}