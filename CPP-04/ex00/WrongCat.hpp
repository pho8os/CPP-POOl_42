/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:18:03 by absaid            #+#    #+#             */
/*   Updated: 2023/09/20 00:18:19 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &obj);
        ~WrongCat();
        WrongCat &operator=(const WrongCat &obj);
        void makeSound() const;
};

