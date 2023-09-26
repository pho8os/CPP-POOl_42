/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:01:15 by absaid            #+#    #+#             */
/*   Updated: 2023/09/21 10:01:25 by absaid           ###   ########.fr       */
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
// a->makeSound();


// delete j;//should not create a leak
// delete i;
Dog *d = new Dog();
Dog *a = new Dog();
std::cout << "======\n"; 
Dog walid(*a);
*d = *d;
std::cout << "======\n"; 
delete d;
delete a;
return 0;
}