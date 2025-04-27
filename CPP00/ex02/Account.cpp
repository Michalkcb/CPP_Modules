/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:05:21 by mbany             #+#    #+#             */
/*   Updated: 2025/04/27 14:05:24 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
	std::time_t now = std::time(NULL);
	std::tm *ltm = std::localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year 
		<< std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon
		<< std::setw(2) << std::setfill('0') << ltm->tm_mday << "_"
		<< std::setw(2) << std::setfill('0') << ltm->tm_hour
		<< std::setw(2) << std::setfill('0') << ltm->tm_min
		<< std::setw(2) << std::setfill('0') << ltm->tm_sec << "] ";
}

Account::Account(int initial_deposit): _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) 
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created" << std::endl;
}

Account::~Account() 
{
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex 
				<< ";amount:" << _amount 
				<< ";closed" << std::endl;
}

void Account::displayAccountsInfos() 
{
	_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts 
				<< ";total:" << _totalAmount 
				<< ";deposit:" << _totalNbDeposits 
				<< ";withdrwawls:" << _totalNbWithdrawals 
				<< std::endl;
}

void Account::displayStatus() const 
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
				<< ";total:" << _amount
				<< ";deposit:" << _nbDeposits
				<< ";withdrwawls:" << _nbWithdrawals
				<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	
	std::cout 	<< "index:" << _accountIndex
				<< ";p-amount:" << _amount
				<< ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
				
	std::cout 	<< ";amount:" << _amount
				<< ";nb-deposits:" << _nbDeposits
				<< std::endl;
		
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
		<< ";p-amount:" << _amount 
		<< ";withdrawal:";
	if (withdrawal > _amount) {
		std::cout << "refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << _amount << ";nb-withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount() const 
{
	std::cout << "Check Amount" << std::endl;
	return 0;
}

int Account::getNbAccounts() 
{
	return _nbAccounts;
}
int Account::getTotalAmount() 
{
	return _totalAmount;
}