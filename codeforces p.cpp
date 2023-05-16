#include <iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class Bank {
  char name[100], adr[100], ac_t;
  int balance;

public:
  void Open_account();
  void Deposite_money();
  void Withdraw_money();
  void Display_account();
};

void Bank::Open_account() {
  cout << "Enter your full name: ";
  cin.ignore();
  cin.getline(name, 100);
  cout << "Enter your address: ";
  cin.getline(adr, 100);
  cout << "What type of account you want to open? Savings(s) or current(c): ";
  cin >> ac_t;
  cout << "Enter amount for deposit: ";
  cin >> balance;
  cout << "Your account is created." << endl;
}

void Bank::Deposite_money() {
  int a;
  cout << "Enter how much you want to deposit: ";
  cin >> a;
  balance += a;
  cout << "Total amount you have deposited: " << balance << endl;
}

void Bank::Withdraw_money() {
  float amount;
  cout << "---- Withdraw ----" << endl;
  cout << "Enter amount to withdraw: ";
  cin >> amount;
  balance -= amount;
  cout << "Total amount left currently: " << balance << endl;
}

void Bank::Display_account() {
  cout << "Your full name: " << name << endl;
  cout << "Your address: " << adr << endl;
  cout << "Type of account that you have opened: " << ac_t << endl;
  cout << "Amount you have deposited: " << balance << endl;
}

int main() {
  int num;
  char x;
  Bank obj;
  do {
    cout << "1. Open Account." << endl;
    cout << "2. Deposit Money." << endl;
    cout << "3. Withdraw Money." << endl;
    cout << "4. Display Account." << endl;
    cout << "5. Exit System." << endl;
    cout << "Select an option from above: ";
    cin >> num;

    switch (num) {
      case 1:
        cout << "1. Open Account." << endl;
        obj.Open_account();
        break;
      case 2:
        cout << "2. Deposit Money." << endl;
        obj.Deposite_money();
        break;
      case 3:
        cout << "3. Withdraw Money." << endl;
        obj.Withdraw_money();
        break;
      case 4:
        cout << "4. Display Account." << endl;
        obj.Display_account();
        break;
      case 5:
        cout << "Exiting the system..." << endl;
        exit(0);
      default:
        cout << "Wrong option! Please try again." << endl;
    }

    cout << "\nDo you want to select the next option? Press 'y' to continue or 'n' to exit: ";
    cin >> x;

  } while (x == 'y' || x == 'Y');
  return 0;
}
