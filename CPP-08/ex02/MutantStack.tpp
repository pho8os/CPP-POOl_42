/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:21:12 by absaid            #+#    #+#             */
/*   Updated: 2023/10/16 21:21:38 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> MutantStack<T>::MutantStack() {}

template <typename T> MutantStack<T>::~MutantStack() {}

template <typename T> MutantStack<T>::MutantStack(const MutantStack &obj) {
  *this = obj;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &obj) {
  if (this != &obj)
    this->c = obj.c;
  return *this;
}

template <typename T> typename std::deque<T>::iterator MutantStack<T>::begin() {
  return this->c.begin();
}

template <typename T> typename std::deque<T>::iterator MutantStack<T>::end() {
  return this->c.end();
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rbegin() {
  return this->c.rbegin();
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rend() {
  return this->c.rend();
}