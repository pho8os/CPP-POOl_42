/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:52:47 by absaid            #+#    #+#             */
/*   Updated: 2023/10/15 22:39:08 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <stdexcept>

template <typename T> 
Array<T>::Array() : n(0), elements(new T[0]()) {}

template <typename T> 
Array<T>::~Array() { delete[] elements;}

template <typename T>
Array<T>::Array(unsigned int n) : n(n) , elements(new T[n]()) {}

template <typename T> Array<T>::Array(const Array &obj) {
  this->elements = new T[obj.n]();
  *this = obj;
}

template <typename T> 
Array<T> &Array<T>::operator=(const Array &obj) {
  if (this != &obj) {
    delete[] this->elements;
    this->n = obj.n;
    this->elements = new T[this->n]();
    for (unsigned int i = 0; i < this->n; i++)
      this->elements[i] = obj.elements[i];
  }
  return (*this);
}
template <typename T> 
T &Array<T>::operator[](const unsigned int &index) {
  if (index >= n)
    throw std::out_of_range("Array : index out of bounds");
  return this->elements[index];
}

template <typename T>
unsigned int Array<T>::size(){return(this->n);}