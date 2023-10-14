/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:02:02 by absaid            #+#    #+#             */
/*   Updated: 2023/10/14 01:01:55 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

typedef struct s_data {
  int i;
  char c;
} Data;

class Serializer {
private:
    Serializer();
    Serializer(const Serializer &obj);
    Serializer &operator=(const Serializer &obj);
    ~Serializer();
public:
  static uintptr_t serialize(Data *ptr);
  static Data *deserialize(uintptr_t raw);
};