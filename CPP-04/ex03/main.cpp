/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:47:51 by absaid            #+#    #+#             */
/*   Updated: 2023/09/29 09:25:01 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <cstdlib>

int main()
{
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());
  ICharacter* me = new Character("me");
  AMateria* tmp;
  AMateria* tmp1;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp1 = src->createMateria("cure");
  me->equip(tmp1);
  // me->unequip(0);
  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  delete tmp;
  delete tmp1;
  delete bob;
  delete me;
  delete src;
  return 0;
}