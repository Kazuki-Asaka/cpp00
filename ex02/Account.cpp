#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit) {
	_amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    _totalAmount += _amount;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    _nbAccounts++;
}

Account::~Account() {
	std::cout << "index" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
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

void Account::displayAccountsInfos( void ) {
	std::cout << "accounts:"<< _nbAccounts << ";"<< "total:" << _totalAmount << ";"<< "deposits:"<<_totalNbDeposits<<";"<<"withdrawals:"<<_totalNbWithdrawals << std::endl;
}

void Account::displayStatus( void ) const{
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "deposit:" << _nbDeposits << ";"
			  << "withdrawals:" << _nbWithdrawals
			  <<std::endl;
}

void Account::makeDeposit( int deposit ) {
	int	p_amount;

	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << p_amount << ";"
			  << "deposit:" << deposit << ";"
			  << "amount:" << _amount << ";"
			  << "nb_deposit:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
	int	p_amount;

	p_amount = _amount;
	if (_amount - withdrawal >= 0) {
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << p_amount << ";"
			  << "withdrawal:" << withdrawal << ";"
			  << "amount:" << _amount << ";"
			  << "nb_withdrawal:" << _nbWithdrawals << std::endl;
		return(true);
	}
	else {
		std::cout << "index:" << _accountIndex << ";" << "p_amount:" << p_amount << ";" << "withdrawals:refused" << std::endl; 
		return (false);
	}
}

int Account::checkAmount( void ) const{
	return (_amount);
}