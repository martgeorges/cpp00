/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeorges <mgeorges@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 08:33:20 by mgeorges          #+#    #+#             */
/*   Updated: 2025/03/13 08:55:52 by mgeorges         ###   ########.fr       */
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
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;
    Account::_totalAmount += this->_amount;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}

void    Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount += deposit;
    this->_nbDeposits++;

    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";"; 
    std::cout << "withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	else
	{
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << withdrawal << ";";
        std::cout<< "amount:" << _amount << ";";
        std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
}

void    Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp(void) {
    std::time_t now = std::time(NULL);
    std::tm* localTime = std::localtime(&now);

    std::cout << "["
              << (localTime->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (localTime->tm_mon)
              << std::setw(2) << std::setfill('0') << (localTime->tm_mday)
              << "_"
              << std::setw(2) << std::setfill('0') << (localTime->tm_hour)
              << std::setw(2) << std::setfill('0') << (localTime->tm_min)
              << std::setw(2) << std::setfill('0') << (localTime->tm_sec)
              << "]" << " ";
}

void    Account::displayAccountsInfos(void) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

int Account::checkAmount(void) const {
    if (this->_amount < 0)
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
    return (Account::_totalNbWithdrawals);
}
