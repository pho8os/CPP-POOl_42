/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:02:56 by absaid            #+#    #+#             */
/*   Updated: 2023/09/07 12:03:21 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl;   
}
void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int index = (level == "DEBUG") * 1 + (level == "INFO") * 2 + (level == "WARNING") * 3 + (level == "ERROR") * 4;
    if(!index)
        return (std::cout << "[ Probably complaining about insignificant problems ]" << std::endl, (void)0);
    switch(index)
    {
        case(1):    
            std::cout << "[ DEBUG ]" << std::endl;
            debug();
            std::cout << std::endl;
        case(2):
            std::cout << "[ INFO ]" << std::endl;
            info();
            std::cout << std::endl;
        case(3):
            std::cout << "[ WARNING ]" << std::endl;
            warning();
            std::cout << std::endl;
        case(4):
            std::cout << "[ ERROR ]" << std::endl;
            error();
        break;
    }
}