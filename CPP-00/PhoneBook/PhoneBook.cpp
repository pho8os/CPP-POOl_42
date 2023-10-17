/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:30:02 by absaid            #+#    #+#             */
/*   Updated: 2023/09/03 15:56:44 by absaid           ###   ########.fr       */
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
		std::cout << prompt;
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
	set_element(&Contact::set_FirstName,"First name : ",a);
	set_element(&Contact::set_LastName,"Last name : ",a);
	set_element(&Contact::set_NickName,"Nick name : ",a);
	set_element(&Contact::set_PhoneNumber,"Phone Number : ",a);
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
	std::cout << "First Name : " << a.get_FirstName() <<  std::endl;
	std::cout << "Last Name : " << a.get_LastName() <<  std::endl;
	std::cout <<  "Nick Name : " << a.get_NickName() <<  std::endl;
	std::cout <<  "Phone Number : " << a.get_PhoneNumber() <<  std::endl;
	std::cout <<  "Darkest secret : " << a.get_DarkestSecret() <<  std::endl;
}

void Phonebook::show_contact()
{
	int i = -1;
	int j = (this->index >= 8) * 8 + (this->index < 8) * this->index;
	std::cout << HCYN << "+_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_+" << RESET <<std::endl;
	std::cout << HCYN << "|     INDEX|FIRST NAME| LAST NAME| NICK NAME|" << RESET << std::endl;
	std::cout << HCYN << "+_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_+" << RESET << std::endl;
	while(++i < j)
		print_contacts(this->_contacts[i % 8], i);
	std::cout << HCYN << "+_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_+" << RESET << std::endl;
	if(this->index > 0)
	{	
		while(std::cin.good())
		{
			std::cout << HRED << "Choose a valid INDEX : " << RESET;
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
