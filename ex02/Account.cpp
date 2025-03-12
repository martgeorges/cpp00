/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 08:33:20 by mgeorges          #+#    #+#             */
/*   Updated: 2025/03/12 13:39:42 by mgeorges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account:: _totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {

    std::cout << "Constructor called" << std::endl;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_accountIndex = Account::_nbAccounts;
    Account::_accountIndex++;
    Account::_totalAmount += this->_amount;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void) {
    std::cout << "Destructor called" << std:: endl;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}


// displaytime stamp() index: + amount: + deposits + withdrawals: -> endl;
void    Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
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

void    Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

int Account::checkAmount(void) const {
    if (this->_totalAmount < 0)
        return (1);
    return (0);
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
    //Account::_displayTimestamp();
    return(0);
}*/