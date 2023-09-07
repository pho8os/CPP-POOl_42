/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:11:15 by absaid            #+#    #+#             */
/*   Updated: 2023/09/06 10:29:11 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *aghs = new Zombie[N];
    for(int i = 0;i < N; i++)
    {
        aghs[i].set_name(name);
        aghs[i].announce();
    }
    return(aghs);
}