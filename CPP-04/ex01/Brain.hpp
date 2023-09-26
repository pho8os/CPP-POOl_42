/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 02:18:47 by absaid            #+#    #+#             */
/*   Updated: 2023/09/21 08:35:07 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const std::string &idea);
        Brain(const Brain &obj);
        Brain &operator=(const Brain &obj);
        ~Brain();
        std::string getidea(int index) const;
        void setidea(int index,const std::string &idea);
};