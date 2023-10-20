#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit) {
	_amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += _amount;
}

int Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

#include <iostream>

void Account::displayAccountsInfos( void ) {
	std::cout << "accounts:total8"<< _totalAmount << ";"<< "deposits"<<";"<<_totalNbDeposits<<"withdrawals"<<";"<<_totalNbWithdrawals;
}

void Account::displayStatus( void ) const{
	std::cout << "index:" << _accountIndex
			  << "amount:" << _amount
			  << "deposit:" << _nbDeposits
			  << "withdrawals:" << _nbWithdrawals
			  <<std::endl;
}

void Account::makeDeposit( int deposit ) {
	_amount += deposit;
	_nbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal ) {
	if (_amount - withdrawal >= 0) {
		_amount -= withdrawal;
		_nbWithdrawals++;
		return(true);
	}
	else {
		_nbWithdrawals++;
		return (false);
	}
}

int Account::checkAmount( void ) const{
	return (_amount);
}