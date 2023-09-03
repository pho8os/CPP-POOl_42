/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:58:49 by absaid            #+#    #+#             */
/*   Updated: 2023/09/02 09:26:00 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include <sstream>

# define HBLK "\e[1;90m"
# define HRED "\e[1;91m"
# define HGRN "\e[1;92m"
# define HYEL "\e[1;93m"
# define HBLU "\e[1;94m"
# define HMAG "\e[1;95m"
# define HCYN "\e[1;96m"
# define HWHT "\e[1;97m"
# define RESET "\x1b[0m"


class Contact
{
	private:
		std::string _FirstName;
		std::string _LastName;
		std::string _NickName;
		std::string _PhoneNumber;
		std::string _DarkestSecret;
	public:
		void set_FirstName(std::string str);
		void set_LastName(std::string str);
		void set_NickName(std::string str);
		void set_PhoneNumber(std::string str);
		void set_DarkestSecret(std::string str);
		std::string get_FirstName() const;
		std::string get_LastName() const;
		std::string get_NickName() const;
		std::string get_PhoneNumber() const;
		std::string get_DarkestSecret() const;
};