// Source files (.cpp): These files contain the definitions for the classes and functions declared in the corresponding header file. They include the "implementation" of your classes and functions.

#include "BankAccount.h"

BankAccount::BankAccount(std::string accountNumber, std::string ownerName, double balance)
    : accountNumber(accountNumber), ownerName(ownerName), balance(balance)
{
  std::cout << "Bank Account " << accountNumber << " created." << std::endl;
}

std::string BankAccount::getAccountNumber()
{
  return this->accountNumber;
}

std::string BankAccount::getOwnerName()
{
  return this->ownerName;
}

void BankAccount::deposit(double amount)
{
  this->balance += amount;
  std::cout << "Deposited " << amount << ". New balance is " << this->balance << std::endl;
}

bool BankAccount::withdraw(double amount)
{
  if (amount > this->balance)
  {
    std::cout << "Insufficient funds. Unable to withdraw " << amount << std::endl;
    return false;
  }
  this->balance -= amount;
  std::cout << "Withdrew " << amount << ". New balance is " << this->balance << std::endl;
  return true;
}

double BankAccount::getBalance()
{
  return this->balance;
}