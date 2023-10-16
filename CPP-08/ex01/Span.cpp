/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:04:01 by absaid            #+#    #+#             */
/*   Updated: 2023/10/16 16:39:07 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>
#include <iterator>
#include <stdexcept>

Span::Span() {
  vec.reserve(10);
  this->N = 10;
}
Span::~Span() {}

Span::Span(unsigned int N) {
  vec.reserve(N);
  this->N = N;
}

void Span::addNumber(int d) {
  if (N < vec.size() + 1)
    throw std::out_of_range("vec : out of boundries");
  this->vec.push_back(d);
}

int Span::shortestSpan() {
  std::sort(vec.begin(), vec.end());
  int span = *(vec.begin() + 1) - *vec.begin();
  for (std::vector<int>::iterator it = vec.begin() + 1; it < vec.end() - 1; it++)
    if (span > *(it + 1) - *it )
      span = *(it + 1) - *it;
  return (span);
}

int Span::longestSpan()
{
  std::sort(vec.begin(), vec.end());
    return(*(vec.end() - 1) - *vec.begin());
}

void Span::addNumbers(std::vector<int>::iterator begin ,std::vector<int>::iterator end)
{
    if(std::distance(begin, end) > this->N - (unsigned int)this->vec.size())
        throw std::out_of_range("vec : out of boundries insert");
    this->vec.insert(vec.end(), begin, end);
}