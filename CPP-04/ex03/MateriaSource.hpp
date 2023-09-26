/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:50:41 by absaid            #+#    #+#             */
/*   Updated: 2023/09/26 10:31:48 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
    private:
        AMateria *ability[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &obj);
        MateriaSource &operator=(const MateriaSource &obj);
        ~MateriaSource();
        void learnMateria(AMateria *M);
        AMateria *createMateria(std::string const &type);
};