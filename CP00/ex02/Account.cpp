#include "Account.hpp"
#include <iostream>
#include <iostream>
#include <ctime>
#include <cstdio>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


void Account::_displayTimestamp( void )
{
    std::time_t now = std::time(0);
    std::tm* tm_info = std::localtime(&now);
    char buffer[32];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", tm_info);

    std::cout << "[" << buffer << "]" << " ";
}

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    std::cout << "index:" << _accountIndex << ";";
    _amount = initial_deposit;
    std::cout << "amount:" << initial_deposit << ";created" << std::endl;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account( void )
{
    _nbAccounts--;
    _totalAmount -= _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    std::cout << "amount:" << _amount << ";";
    _nbDeposits++;
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if(_amount >= withdrawal)
    {
        std::cout << "withdrawal:" << withdrawal << ";";
        _amount -= withdrawal;
        std::cout << "amount:" << _amount << ";";
        _nbWithdrawals++;
        std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
    std::cout << "withdrawal:refused" << std::endl;
    return false;
}

int		Account::checkAmount( void ) const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}
