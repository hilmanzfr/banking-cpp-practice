#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "BankAccount.h"

class SavingsAccount : public BankAccount
{
protected:
  double interestRate;

public:
  SavingsAccount(std::string accountNumber, std::string ownerName, double balance, double interestRate);
  void addInterest();
};

#endif