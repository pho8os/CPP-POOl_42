/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:01:15 by absaid            #+#    #+#             */
/*   Updated: 2023/10/09 21:00:20 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"


int main()
{
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// const Animal* a = new Animal();
// i->makeSound();
// j->makeSound();

// delete j;//should not create a leak
// delete i;
// delete a;
    Dog basic;
    {
        Dog tmp = basic;
    }
    std::cout << "*******************" << std::endl;
    Dog basic1;
    Dog tmp2 = basic1;
    std::cout << "*******************" << std::endl;

}