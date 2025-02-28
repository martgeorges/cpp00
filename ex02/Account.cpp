/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 08:33:20 by mgeorges          #+#    #+#             */
/*   Updated: 2025/02/28 13:41:25 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account(int initial_deposit) {
    std::cout << "Constructor called" << std::endl;
    
}

Account::~Account(void) {
    std::cout << "Destructor called" << std:: endl;
}

void    Account::_displayTimestamp(void) {
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);

    std::cout << "["
              << (localTime->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (localTime->tm_mon)
              << std::setw(2) << std::setfill('0') << (localTime->tm_mday)
              << "_"
              << std::setw(2) << std::setfill('0') << (localTime->tm_hour)
              << std::setw(2) << std::setfill('0') << (localTime->tm_min)
              << std::setw(2) << std::setfill('0') << (localTime->tm_sec)
              << "]" << std::endl;
}



int Account::getNbAccounts(void) {
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
    return (Account::_nbWithdrawals);
}

/*int main()
{
    Account::_displayTimestamp();
    return(0);
}*/