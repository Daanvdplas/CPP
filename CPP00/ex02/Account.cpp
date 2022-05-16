#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals= 0;

void	Account::_displayTimestamp(void)
{
	char		buffer[100];
	time_t		t1;
	struct tm	*t;

	time(&t1);
	t = localtime(&t1);
	strftime(buffer, 100, "[%Y%m%d_%H%M%S] ", t);	
	std::cout << buffer;
}

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
		<< _amount << ";created" << std::endl;
	_nbAccounts++;
}

int		Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int		Account::getTotalAmount(void)
{
	return _totalAmount;
}

int		Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
		<< _amount << ";deposits:" << _nbDeposits 
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" 
		<< _totalAmount << ";deposits:" << _totalNbDeposits 
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" 
		<< _amount << ";deposit:";
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << deposit << ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdr)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" 
		<< _amount << ";withdrawal:";
	if (_amount >= withdr)
	{
		_totalAmount -= withdr;
		_amount -= withdr;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << withdr << ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
		<< _amount << ";closed" << std::endl;
}
