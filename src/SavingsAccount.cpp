#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string accountNumber, std::string ownerName, double balance, double interestRate)
    : BankAccount(accountNumber, ownerName, balance), interestRate(interestRate)
{
  std::cout << "Savings Account " << accountNumber << " created." << std::endl;
}

void SavingsAccount::addInterest()
{
  double interest = this->balance * (interestRate / 100);
  this->balance += interest;
  std::cout << "Added interest of " << interest << ". New balance is " << this->balance << std::endl;
}
