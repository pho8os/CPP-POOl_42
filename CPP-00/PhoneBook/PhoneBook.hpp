/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:57:19 by absaid            #+#    #+#             */
/*   Updated: 2023/09/02 09:25:35 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"
#include <iomanip>

void check_eof();
class Phonebook
{
	Contact _contacts[8];
	int index;
	public:
	Phonebook();
	void add_contact();
	void show_contact();
};