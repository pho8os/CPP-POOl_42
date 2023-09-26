/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:34:46 by absaid            #+#    #+#             */
/*   Updated: 2023/09/26 06:02:47 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter {

    private:
        std::string name;
        AMateria *ability[4];
    public:
        Character();
        Character(const std::string &name);
        Character(const Character &obj);
        Character &operator=(const Character &obj);
        ~Character();
        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};