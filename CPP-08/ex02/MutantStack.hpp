/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:10:17 by absaid            #+#    #+#             */
/*   Updated: 2023/10/16 17:34:32 by absaid           ###   ########.fr       */
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
    typedef typename std::deque<T>::iterator it;
    typedef typename std::deque<T>::reverse_iterator rev_it;
    it begin();
    it end();
    rev_it rbegin();
    rev_it rend();
};
#include "MutantStack.tpp"