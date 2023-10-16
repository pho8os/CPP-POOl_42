/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:29:26 by absaid            #+#    #+#             */
/*   Updated: 2023/10/16 15:51:07 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

class Span
{
    private:
        std::vector<int> vec;
        unsigned int N;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        ~Span();
        void addNumber(int d);
        void addNumbers(std::vector<int>::iterator begin ,std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
};