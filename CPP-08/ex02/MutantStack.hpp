/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:10:17 by absaid            #+#    #+#             */
/*   Updated: 2023/10/16 19:08:39 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include<iostream>
#include <deque>
#include <stack>
template <typename T>
class MutantStack : public std::stack<T>
{
    public:
    MutantStack();
    MutantStack(const MutantStack &obj);
    MutantStack &operator=(const MutantStack &obj);
    ~MutantStack();
    typename std::deque<T>::iterator begin();
    typename std::deque<T>::iterator end();
    typename std::deque<T>::reverse_iterator rbegin();
    typename std::deque<T>::reverse_iterator rend();
};
#include "MutantStack.tpp"