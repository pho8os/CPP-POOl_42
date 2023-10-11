/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:27:23 by absaid            #+#    #+#             */
/*   Updated: 2023/10/11 04:23:07 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
int main() {
  try{
    Form f("Contrat", 3, 4);
    Bureaucrat mark("Phobos", 4);
    std::cout << mark << std::endl;
    mark.signForm(f);
    mark.increment();
    std::cout << mark << std::endl;
    mark.signForm(f);
  }
  catch(std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
}