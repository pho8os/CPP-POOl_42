/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:51:51 by absaid            #+#    #+#             */
/*   Updated: 2023/09/29 09:33:08 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

class AAnimal{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal &obj);
        virtual ~AAnimal();
        AAnimal &operator=(const AAnimal &obj);
        virtual void makeSound() const = 0;
        virtual std::string getBrainIdea(int index) const = 0;
        std::string getType() const;
};