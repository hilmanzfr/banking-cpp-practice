#ifndef BANK_H
#define BANK_H
#include <unordered_map>
#include "BankAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

class Bank
{
private:
  // The key will be the account number, and the value will be the BankAccount object
  std::unordered_map<std::string, BankAccount *> bankAccounts;

public:
  Bank();
  void createAccount(std::string accountType, std::string accountNumber, std::string ownerName, double initialBalance);
  void depositMoney(std::string accountNumber, double amount);
  void withdrawMoney(std::string accountNumber, double amount);
  void printAccountDetails(std::string accountNumber);
};

#endif