/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:11:37 by absaid            #+#    #+#             */
/*   Updated: 2023/10/16 21:20:43 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    int array[6] = {0 , 8, 2, 3, 4, 5};
    std::vector<int> V ;
    V.insert(V.begin(), std::begin(array), std::end(array));
    std::cout << easyfind(V, 8) << std::endl;
}