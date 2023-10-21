/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:01:41 by absaid            #+#    #+#             */
/*   Updated: 2023/10/21 15:03:46 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
        return (std::cout << "Invalid number of args!" << std::endl, 1);
    try{
        thefuncVec(av[1]);
    }catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}