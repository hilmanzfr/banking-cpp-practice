# Banking Application

This is a simple command line Banking Application written in C++. It supports the creation of checking and savings accounts, and allows deposit, withdrawal and viewing of account details.

## Classes

- `BankAccount`: Represents a bank account with essential fields like account number, owner name and balance.
- `CheckingAccount`: Derived from `Account`, adds overdraft limit functionality.
- `SavingsAccount`: Derived from `Account`, adds interest rate functionality.
- `Bank`: Manages multiple accounts.

## Compilation

The project uses CMake for compilation. Here's how you can compile and run it:

```bash
# Navigate to the root of the project
cd path/to/project

# Create and navigate to the build directory
mkdir build && cd build

# Run CMake and compile the code
cmake ..
make -j4

# Run the application
./BankingApp
```
