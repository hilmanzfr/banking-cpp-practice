// Header files (.h or .hpp): These files typically contain class and function declarations. They essentially provide an "interface" that other files can use to interact with the code in the corresponding source file.

#ifndef BANK_ACCOUNT_H // Include guard to prevent header file to duplicate
#define BANK_ACCOUNT_H
#include <string>
#include <iostream>

class BankAccount
{
protected:
  std::string accountNumber;
  std::string ownerName;
  double balance;

public:
  BankAccount(std::string accountNumber, std::string ownerName, double balance);
  std::string getAccountNumber();
  std::string getOwnerName();
  void deposit(double amount);
  virtual bool withdraw(double amount);
  double getBalance();
};

#endif