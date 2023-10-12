/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:27:23 by absaid            #+#    #+#             */
/*   Updated: 2023/10/12 05:03:30 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
int main() {
  try{
    Form f("Contrat", 3, 4);
    Bureaucrat mark("Phobos", 1);
    std::cout << mark << std::endl;
    std::cout << f << std::endl;
    mark.signForm(f);
    std::cout << f << std::endl;
    mark.increment();
    std::cout << mark << std::endl;
    mark.signForm(f);
  }
  catch(std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
}