/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:24:07 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/25 15:09:22 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    std::cout << "index:" << _accountIndex << ";";
    _amount = initial_deposit;
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

void    Account::_displayTimestamp(void) {
    char buffer[20];
    std::time_t now;
    std::tm* local;

    now = std::time(NULL);
    local = std::localtime(&now);
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local);
    std::cout << "[" << buffer << "] ";
}

void	Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
    _displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount = _amount + deposit;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if (_amount - withdrawal > 0) {
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal << ";";
        _amount = _amount - withdrawal;
        std::cout << "amount:" << _amount << ";";
        _nbWithdrawals++;
        std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        return false;
    }
    std::cout << "withdrawal:refused" << std::endl;
    return true;
}

int	Account::getNbAccounts(void) {return _nbAccounts;}
int	Account::getTotalAmount(void) {return _totalAmount;}
int	Account::getNbDeposits(void) {return _totalNbDeposits;}
int	Account::getNbWithdrawals(void) {return _totalNbWithdrawals;}
