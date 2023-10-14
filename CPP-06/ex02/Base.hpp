/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:55:03 by absaid            #+#    #+#             */
/*   Updated: 2023/10/14 05:30:52 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Base {
public:
  virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};
Base * generate(void);
void identify(Base *p);
void identify(Base &p);