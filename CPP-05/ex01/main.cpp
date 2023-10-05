/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:27:23 by absaid            #+#    #+#             */
/*   Updated: 2023/10/05 00:53:47 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
int main() {
  try{
    Form f("Wri9a", 3, 4);
    Bureaucrat mark("Phobos", 4);
    f.beSigned(mark);
    mark.signForm(f);
  }
  catch(std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
}