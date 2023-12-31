/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 06:51:42 by absaid            #+#    #+#             */
/*   Updated: 2023/10/23 13:58:19 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <map>
#include <cctype>
#include <climits>
#include <cstdio>
#include <iostream>
#include <new>
#include <stdexcept>
#include <string>
#include <utility>

class BitcoinExchange
{
    private:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange &operator=(const BitcoinExchange &obj);
        ~BitcoinExchange();
    public:
        static std::map<std::string,double> data;
        static double getprice(std::string date);
};
std::map<std::string, double> parsedata(std::string file);
bool is_valid_date(std::string date);
std::string *splitdata(std::string line, std::string sep);