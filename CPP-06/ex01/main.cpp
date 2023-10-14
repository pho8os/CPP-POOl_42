/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:30:47 by absaid            #+#    #+#             */
/*   Updated: 2023/10/14 01:43:54 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <sys/_types/_uintptr_t.h>

int main() {
  Data s;
  s.c = 'a';
  s.i = 1;
  std::cout << &s << std::endl;
  uintptr_t uint = Serializer::serialize(&s);
  std::cout << "0x" << std::hex << uint << std::endl;
  std::cout << (Serializer::deserialize(uint))->c << "\t"
            << (Serializer::deserialize(uint))->i << std::endl;
}