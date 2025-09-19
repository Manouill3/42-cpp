/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:24:07 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/19 14:20:05 by mdegache         ###   ########.fr       */
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
    
}

Account::~Account(void) {
    
}

void    Account::_displayTimestamp(void) {
    
}

void	Account::displayStatus(void) const {
    
}

void    Account::displayAccountsInfos(void) {
    _displayTimestamp();
}

void	Account::makeDeposit(int deposit) {
    
}

bool	Account::makeWithdrawal(int withdrawal) {
    
}

int		Account::checkAmount(void) const {
    
}

int	Account::getNbAccounts(void) {return _nbAccounts;}
int	Account::getTotalAmount(void) {return _totalAmount;}
int	Account::getNbDeposits(void) {return _totalNbDeposits;}
int	Account::getNbWithdrawals(void) {return _totalNbWithdrawals;}
