/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 23:01:15 by absaid            #+#    #+#             */
/*   Updated: 2023/09/29 09:35:32 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main() {

  const WrongAnimal *notcat = new WrongCat();
  const WrongAnimal *notanimal = new WrongAnimal();
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << j->getType()  << std::endl;
  std::cout << i->getType() << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  notcat->makeSound();
  notanimal->makeSound();
  delete i;
  delete j;
  delete meta;
  delete notanimal;
  delete notcat;
  return 0;
}