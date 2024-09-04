/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:04:33 by ehay              #+#    #+#             */
/*   Updated: 2024/09/04 16:29:27 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

// Construtor & Destructor
Account::Account(int initial_deposit)
{
	// utiliser initial_deposit
	return;
}

Account::~Account()
{
	return;
}

// Get function
static int Account::getNbAccounts()
{
	return (this->_nbAccounts);
}

static int Account::getTotalAmount()
{
	return (this->_totalAmount);
}

static int Account::getNbDeposits()
{
	return (this->_totalNbDeposits);
}

static int Account::getNbWithdrawals()
{
	return (this->_totalNbWithdrawals);
}

// Other Actions
void Account::makeDeposit(int deposit)
{
	// this->_amount = this->_amount + deposit;
	// this->_nbDeposits = this->_nbDeposits + 1;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal <= this->_amount)
	{
		this->_nbWithdrawals = this->_nbWithdrawals + 1;
		return (true);
	}
	else
	{
		//
		return (false);
	}
}

int Account::checkAmount() const
{
	return (this->_amount);
}

// Display function
static void Account::displayAccountsInfos()
{
	// afficher les info _accountIndex, _amount, _nbDeposits et _nbWithdrawals ?
}

void Account::displayStatus() const
{
	//
}

static void Account::_displayTimestamp(oid) const
{
	// get puis print la date et heure actuelle
}


