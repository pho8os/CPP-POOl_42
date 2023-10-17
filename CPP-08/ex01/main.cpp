/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:31:54 by absaid            #+#    #+#             */
/*   Updated: 2023/10/16 21:34:03 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <exception>
#include <vector>

int main()
{

Span sp = Span(7);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
std::vector<int> v;
v.reserve(5);
v.push_back(5);
try{
    sp.addNumbers(v.begin(), v.end());
}
catch(std::exception &e)
{
    std::cout << e.what() << std::endl;
}
std::cout << sp.shortestSpan() << std::endl;

Span a(10000);
for(int i = 0; i < 10000; i++)
    a.addNumber(i);
std::cout << a.shortestSpan() << std::endl;
std::cout << a.longestSpan() << std::endl;
}