/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:30:02 by absaid            #+#    #+#             */
/*   Updated: 2023/09/03 09:06:24 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

Phonebook::Phonebook()
{
    this->index = 0;
}

void set_element(void (Contact::*f)(std::string), std::string prompt,Contact &a)
{
	std::string line;
	while(std::cin.good())
	{
		std::cout << HGRN << prompt << RESET;
		std::getline(std::cin, line);
		if(std::cin.eof())
			check_eof();
		if(line.empty())
			continue;
		break;
	}
	(a.*f)(line);
	return ;
}

void set_contact(Contact &a)
{
	std::string line;

	set_element(&Contact::set_FirstName,"First name: ",a);
	set_element(&Contact::set_LastName,"Last name: ",a);
	set_element(&Contact::set_NickName,"Nick name: ",a);
	set_element(&Contact::set_PhoneNumber,"Phone Number: ",a);
	set_element(&Contact::set_DarkestSecret,"Darkest secret : ",a);
}

void Phonebook::add_contact()
{
    set_contact(this->_contacts[this->index % 8]);
    this->index++;
}

/*------------------------------------------------------------------------------------------*/

std::string style_word(std::string str)
{
	std::string ptr = str;
	(ptr.size() > 10) && (ptr = ptr.substr(0, 10), ptr[9] = '.');
	return(ptr);
}

void print_contacts(Contact &a, int index)
{
	std::cout << HCYN << "|" << HWHT << std::setw(10) << index << HCYN << "|" << RESET;
	std::cout << HWHT << std::setw(10) << style_word(a.get_FirstName()) << HCYN << "|" << RESET;
	std::cout << HWHT << std::setw(10) << style_word(a.get_LastName()) << HCYN << "|" << RESET;
	std::cout << HWHT <<  std::setw(10) << style_word(a.get_NickName()) << HCYN << "|" << RESET << std::endl;
}

void show_my_contact(Contact a)
{
	std::cout << HMAG << "First Name : " << a.get_FirstName() << RESET << std::endl;
	std::cout << HMAG << "Last Name : " << a.get_LastName() << RESET << std::endl;
	std::cout <<  HMAG << "Nick Name : " << a.get_NickName() << RESET << std::endl;
	std::cout <<  HMAG << "Phone Number : " << a.get_PhoneNumber() << RESET << std::endl;
	std::cout <<  HMAG << "Darkest secret : " << a.get_DarkestSecret() << RESET << std::endl;
}

void Phonebook::show_contact()
{
	int i = -1;
	int j = (this->index > 8) * 8 + (this->index < 8) * this->index;
	std::cout << HCYN << "+_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_+" << RESET <<std::endl;
	std::cout << HCYN << "|     INDEX|FIRST NAME| LAST NAME| NICK NAME|" << RESET << std::endl;
	std::cout << HCYN << "+_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_+" << RESET << std::endl;
	while(++i < j)
		print_contacts(this->_contacts[i % 8], i);
	std::cout << HCYN << "+_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_+" << RESET << std::endl;
	if(this->index > 0)
	{	
		std::cout << HRED << "choose ur index : " << RESET << std ::endl;
		while(std::cin.good())
		{
			std::string a;
			std::getline(std::cin, a);
			if(std::cin.eof())
				check_eof();
			std::stringstream ss(a);
			ss >> i;
			if(i >= 0 && i < this->index && a.length() == 1 && std::isdigit(a[0]))
				break;
			std::cout << HYEL << "ENTER A VALID INDEX!!" << RESET << std::endl;
		}
		show_my_contact(this->_contacts[i]);
	}
}
