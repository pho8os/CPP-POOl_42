/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 08:05:54 by absaid            #+#    #+#             */
/*   Updated: 2023/09/02 08:28:20 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if(ac < 2)
        return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl , 1);
    for(int i = 1; i < ac; i++)
    {
        std::string a = av[i];
        for(int j = 0; j < (int)a.length() ; j++)
            std::cout << (char)std::toupper(a[j]);
    }
    std::cout << std::endl;
}