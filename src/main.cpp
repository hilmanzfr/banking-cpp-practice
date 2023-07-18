#include "Bank.h"
#include <string>

int main()
{
  std::string accountType, accountNumber, ownerName;
  double amount;
  int choice;

  Bank bank;

  while (true)
  {
    std::cout << std::endl
              << "Welcome to the Banking Application! Please choose an option:" << std::endl;
    std::cout << "1. Create account" << std::endl;
    std::cout << "2. Deposit money" << std::endl;
    std::cout << "3. Withdraw money" << std::endl;
    std::cout << "4. View account details" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter your option: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
      std::cout << "Enter account type (checking or savings): ";
      std::cin >> accountType;
      std::cout << "Enter account number: ";
      std::cin >> accountNumber;
      std::cout << "Enter owner name: ";
      std::cin >> ownerName;
      bank.createAccount(accountType, accountNumber, ownerName, amount);
      break;
    case 2:
      std::cout << "Enter account number: ";
      std::cin >> accountNumber;
      std::cout << "Enter deposit amount: ";
      std::cin >> amount;
      bank.depositMoney(accountNumber, amount);
      break;
    case 3:
      std::cout << "Enter account number: ";
      std::cin >> accountNumber;
      std::cout << "Enter withdrawal amount: ";
      std::cin >> amount;
      bank.withdrawMoney(accountNumber, amount);
      break;
    case 4:
      std::cout << "Enter account number: ";
      std::cin >> accountNumber;
      bank.printAccountDetails(accountNumber);
      break;
    case 5:
      return 0;
    default:
      std::cout << "Invalid choice, please choose a number between 1 to 5" << std::endl;
    }
  }

  return 0;
}