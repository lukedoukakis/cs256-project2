using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "bank_account.cpp"

class CheckingAccount : public BankAccount{

public:

	void withdraw(double amount){
		if(amount > balance){
			charges += 15.00;
		}
	}

	void monthlyProc(){
		charges += 5.00 + .10*withdrawals;
		BankAccount :: monthlyProc();
	}
};



