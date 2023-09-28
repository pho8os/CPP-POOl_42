/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:47:51 by absaid            #+#    #+#             */
/*   Updated: 2023/09/28 08:56:19 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
  IMateriaSource *src = new MateriaSource();

  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter *me = new Character("me");
  AMateria *tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  me->equip(tmp);
  me->equip(tmp);
  me->equip(tmp);
  me->unequip(0);
  delete tmp;
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter *bob = new Character("bob");
  // me->use(0, *bob);
  me->use(0, *bob);
  delete tmp;
  delete bob;
  delete me;
  delete src;
  while(1);
}