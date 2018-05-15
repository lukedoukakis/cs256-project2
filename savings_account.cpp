using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "bank_account.cpp"

class SavingsAccount : public BankAccount{

public:

	bool status; //true = active

	SavingsAccount(double _balance, double _interest){
		balance = _balance;
		interest = _interest;
		if(balance < 25.00){ status = false; }
		else{ status = true; }
	}

	void withdraw(double amount){
		if(status == true){
			BankAccount :: withdraw(amount);
		}
		if(balance < 25.00){
			status = false;
		}
	}

	void deposit(double amount){
		if(status == true){
			BankAccount :: deposit(amount);
		}
	}

	void monthlyProc(){
		if(withdrawals > 4){
			for(int i = 5; i <= withrawals; i++){
				charges += 1.00;
			}
		}
		if(balance < 25.00){
			status = false;
		}else{ status = true; }
		BankAccount :: monthlyProc();
	}

};

