/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:08:34 by absaid            #+#    #+#             */
/*   Updated: 2023/09/07 09:40:48 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <sys/_types/_size_t.h>


int ft_sed(std::string file, std::string search, std::string replace)
{
    if(!std::freopen(file.c_str(), "r", stdin) || !std::freopen((file + ".replace").c_str(), "w+", stdout))
        return(std::cerr << "Error" << std::endl, 1);
    std::string text;
    std::getline(std::cin, text, '\0');
    while(!text.empty())
    {
        size_t pos = text.find(search);
        if(pos == std::string::npos)
            return(std::cout << text, 0);
        std::cout << text.substr(0,pos) << replace;
        text = text.substr(pos + search.length());
    }
    return(0);
}

int main(int ac, char **av)
{
    if(ac != 4)
        return(std::cerr << "Invalid Number of args" << std::endl, 1);
    if(!av[2][0])
        return(std::cerr << "U Can't Search For Nothing!!" << std::endl, 1);
    return(ft_sed(av[1], av[2], av[3]));
}