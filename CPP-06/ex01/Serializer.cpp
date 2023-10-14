/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:00:52 by absaid            #+#    #+#             */
/*   Updated: 2023/10/13 15:06:13 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <sys/_types/_uintptr_t.h>

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}