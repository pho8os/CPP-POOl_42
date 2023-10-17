/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:25:07 by absaid            #+#    #+#             */
/*   Updated: 2023/10/16 21:19:50 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <deque>

int main()
{
    std::deque<int> a;
    MutantStack<int> b;
    MutantStack<int> c;
    a.push_back(12);
    a.push_back(15);
    a.push_back(13);
    b.push(12);
    b.push(15);
    b.push(13);
    c = b;
    std::cout << *(b.end() - 1) << std::endl;
    std::cout << *(c.end() - 1) << std::endl;
    std::cout << *(a.end() - 1) << std::endl;
    std::cout << *(b.begin()) << std::endl;
    std::cout << *(c.begin()) << std::endl;
    std::cout << *(a.begin()) << std::endl;
}