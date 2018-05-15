using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

class BankAccount{

public:

	double balance;
	int deposits;
	int withdrawals;
	double interest;
	double charges;

	BankAccount(double _balance, double _interest){
		balance = _balance;
		interest = _interest;
	}

	void deposit(double amount){
		balance += amount;
		deposits++;
	}

	void withdraw(double amount){
		balance -= amount;
		withdrawals++;
	}

	void calcInt(){
		balance += (interest/12)*balance;
	}

	void monthlyProc(){
		balance -= charges;
		calcInt();
		deposits = 0;
		withdrawals = 0;
		charges = 0;
	}
};


