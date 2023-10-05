/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:23:26 by absaid            #+#    #+#             */
/*   Updated: 2023/09/05 11:52:55 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

std::string get_time()
{
    std::string time;
    time_t tme;

    std::time(&tme);
    struct tm  *timeinfo = localtime(&tme);
    char buffer[21];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", timeinfo);
    return(buffer);
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    std::cout  << get_time() << " index:" << _accountIndex << ";amount:" << initial_deposit<<";created"<< std::endl;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
}
Account::Account()
{
    
}

Account::~Account()
{
    static int j = 0;
    std::cout << get_time() << " index:" << j % Account::_nbAccounts << ";amount:" << _amount << "closed" << std::endl;
    j++;
}
void	Account::displayAccountsInfos()
{
    std::cout << get_time() <<" accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
    std::cout << get_time() << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;

}

void	Account::makeDeposit( int deposit )
{
    std::cout << get_time() << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    (void)withdrawal;
    std::cout << get_time() << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if(withdrawal > _amount)
        return (std::cout << "refused" << std::endl, false);
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    std::cout << withdrawal<< ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl ;
    _totalAmount -= withdrawal;
    return(true);   
}

int	Account::getNbAccounts()
{
    return(0);
}

int	Account::getTotalAmount()
{
    return(0);
}
int	Account::getNbDeposits()
{
    return(0);
}
int	Account::getNbWithdrawals()
{
    return(0);
}

int		Account::checkAmount( void ) const
{

    return(0);
}
