/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:25:07 by absaid            #+#    #+#             */
/*   Updated: 2023/10/16 17:36:56 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <deque>

int main()
{
    std::deque<int> zb;
    MutantStack<int> trma;
    zb.push_back(12);
    zb.push_back(15);
    zb.push_back(13);
    trma.push(12);
    trma.push(17);
    trma.push(15);
    std::cout << *(trma.end() - 1) << std::endl;
    std::cout << *(zb.end() - 1) << std::endl;
}