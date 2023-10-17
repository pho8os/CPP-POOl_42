/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:51:33 by absaid            #+#    #+#             */
/*   Updated: 2023/10/15 22:18:23 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename F> 
void iter(T *array, int len, F func) {
  if (!array)
    return;
  for (int i = 0; i < len; i++)
    func(array[i]);
}
