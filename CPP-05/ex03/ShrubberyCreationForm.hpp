/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 00:19:16 by absaid            #+#    #+#             */
/*   Updated: 2023/10/11 21:39:58 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const &name);
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};