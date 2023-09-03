/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:08:27 by absaid            #+#    #+#             */
/*   Updated: 2023/09/03 09:12:01 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"

void check_eof()
{
	std::cin.clear();
	std::fclose(stdin);
	std::fopen("/dev/tty", "r");
	std::cout << std::endl;
}
int main()
{
	Phonebook contacts;
	std::string ptr;
	std::cout << HBLK << "Phonebook Commands : ADD , SEARCH, EXIT" << RESET << std::endl;
	while(std::cin.good())
	{
		std::cin.clear();
		std::cout << HBLU <<"Choose Your Command : " << RESET; 
		getline(std::cin, ptr);
		if(std::cin.eof())
			check_eof();
		else if(ptr == "ADD")
			contacts.add_contact();
		else if(ptr == "SEARCH")
			contacts.show_contact();
		else if(ptr == "EXIT")
			std::exit(0);
		else
			std::cout << HBLU << "Enter A Valid Command!!" << RESET << std::endl;
	}
}