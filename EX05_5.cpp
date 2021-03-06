// EX05_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Account.h"
#include "Date.h"
#include "Transactions.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	Account a1(1122, "George", 1000);
	a1.setInterestRate(1.5);

	a1.deposit(30);
	a1.deposit(40);
	a1.deposit(50);

	a1.withdraw(5);
	a1.withdraw(4);
	a1.withdraw(2);

	string name = a1.getName();
	cout << "Name: " << name << endl;
	double interestRate = a1.getInterestRate();
	cout << "Yearly interest rate: " << interestRate << endl;
	double balance = a1.getBalance();
	cout << "Account balance: " << balance << endl;
	
	a1.printTransactions();
	


    return 0;
}

