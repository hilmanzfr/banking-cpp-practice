#include "Bank.h"

Bank::Bank() {}

void Bank::createAccount(std::string accountType, std::string accountNumber, std::string ownerName, double initialBalance)
{
  if (bankAccounts.find(accountNumber) != bankAccounts.end())
  {
    std::cout << "Account number " << accountNumber << " is already in use" << std::endl;
    return;
  }

  if (accountType == "checking")
  {
    bankAccounts[accountNumber] = new CheckingAccount(accountNumber, ownerName, initialBalance, 1000.0);
  }
  else if (accountType == "savings")
  {
    bankAccounts[accountNumber] = new SavingsAccount(accountNumber, ownerName, initialBalance, 0.5);
  }
  else
  {
    std::cout << "Invalid account type " << accountType << std::endl;
  }
}

void Bank::depositMoney(std::string accountNumber, double amount)
{
  if (bankAccounts.find(accountNumber) == bankAccounts.end())
  {
    std::cout << "Account number " << accountNumber << " does not exist" << std::endl;
    return;
  }

  bankAccounts[accountNumber]->deposit(amount);
}

void Bank::withdrawMoney(std::string accountNumber, double amount)
{
  if (bankAccounts.find(accountNumber) == bankAccounts.end())
  {
    std::cout << "Account number " << accountNumber << " does not exist" << std::endl;
    return;
  }

  bankAccounts[accountNumber]->withdraw(amount);
}

void Bank::printAccountDetails(std::string accountNumber)
{
  if (bankAccounts.find(accountNumber) == bankAccounts.end())
  {
    std::cout << "Account number " << accountNumber << " does not exist" << std::endl;
    return;
  }

  BankAccount *account = bankAccounts[accountNumber];
  std::cout << "Account number: " << account->getAccountNumber() << std::endl;
  std::cout << "Owner name: " << account->getOwnerName() << std::endl;
  std::cout << "Balance: " << account->getBalance() << std::endl;
}
