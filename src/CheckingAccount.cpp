#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string accountNumber, std::string ownerName, double balance, double overdraftLimit)
    : BankAccount(accountNumber, ownerName, balance), overdraftLimit(overdraftLimit)
{
  std::cout << "Checking account " << accountNumber << " created." << std::endl;
}

bool CheckingAccount::withdraw(double amount)
{
  if (amount > this->balance + overdraftLimit)
  {
    std::cout << "Exceeded overdraft limit. Unable to withdraw " << amount << std::endl;
    return false;
  }
  this->balance -= amount;
  std::cout << "Withdrew " << amount << ". New balance is " << this->balance << std::endl;
  return true;
}