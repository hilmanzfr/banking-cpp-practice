#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "BankAccount.h" // Include base class

class CheckingAccount : public BankAccount
{
protected:
  double overdraftLimit;

public:
  CheckingAccount(std::string accountNumber, std::string ownerName, double balance, double overdraftLimit);
  bool withdraw(double amount) override;
};

#endif