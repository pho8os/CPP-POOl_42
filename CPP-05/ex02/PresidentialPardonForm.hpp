/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:08:48 by absaid            #+#    #+#             */
/*   Updated: 2023/10/10 00:19:34 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const &name);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;

};

//        _-_
//     /~~   ~~\
//  /~~         ~~\
// {               }
//  \  _-     -_  /
//    ~  \\ //  ~
// _- -   | | _- _
//   _ -  | |   -_
//       // \\