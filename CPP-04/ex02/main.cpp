/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:01:15 by absaid            #+#    #+#             */
/*   Updated: 2023/09/21 09:04:33 by absaid           ###   ########.fr       */
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


delete j;//should not create a leak
delete i;

return 0;
}