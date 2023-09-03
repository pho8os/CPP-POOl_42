/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:12:54 by absaid            #+#    #+#             */
/*   Updated: 2023/08/31 04:33:42 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"

void Contact::set_FirstName(std::string str)
{
    this->_FirstName = str;
}
void Contact::set_LastName(std::string str)
{
    this->_LastName = str;
}
void Contact::set_NickName(std::string str)
{
    this->_NickName = str;
}
void Contact::set_PhoneNumber(std::string str)
{
    this->_PhoneNumber = str;
}
void Contact::set_DarkestSecret(std::string str)
{
    this->_DarkestSecret = str;
}
std::string Contact::get_FirstName() const
{
    return this->_FirstName; 
}
std::string Contact::get_LastName() const
{
    return this->_LastName;
}
std::string Contact::get_NickName() const
{
    return this->_NickName;
}
std::string Contact::get_PhoneNumber() const
{
    return this->_PhoneNumber;
}
std::string Contact::get_DarkestSecret() const
{
    return this->_DarkestSecret;
}