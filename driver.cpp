using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

#include "bank_account.cpp"
#include "savings_account.cpp"
#include "checking_account.cpp"

class Driver{
	int main(){

		double user; //user input
		double beginningBalance;
		int deposits;
		int withdrawals;
		int charges;

		//SAVINGS ACCOUNT---------------

		SavingsAccount savings(100.00, .05);
		beginningBalance = 100.00;

		do {
			cout<<"Enter an amount to deposit from the savings account: ";
			cin>>user;
			savings.deposit(user);
			cout<<"\nDeposit made. Make another deposit (1) or make a withdrawal (2)?";
			cin>>user;
		} while (user == 1);

		do {
			cout<<"\nEnter an amount to withdraw from the savings account: ";
			cin>>user;
			savings.withdraw(user);
			cout<<"\nWithdrawal made. Make another withdrawal (1) or finish and show stats (2)?";
			cin>>user;
		} while (user == 1);

		deposits = savings.deposits;
		withdrawals = savings.withdrawals;
		charges = savings.charges;

		savings.monthlyProc();

		cout<<"\n\nBeginning balance: "<<beginningBalance
			<<"\nDeposits made: "<<deposits
			<<"\nWithdrawals made: "<<withdrawals
			<<"\nService charges: "<<charges
			<<"\nEnding balance: "<<savings.balance;

		//CHECKING ACCOUNT---------------

		CheckingAccount checking(100.00, .05);
		beginningBalance = 100.00;

		do {
			cout<<"\n\nEnter an amount to deposit from the checking account: ";
			cin>>user;
			checking.deposit(user);
			cout<<"\nDeposit made. Make another deposit (1) or make a withdrawal (2)?";
			cin>>user;
		} while (user == 1);

		do {
			cout<<"\nEnter an amount to withdraw from the checking account: ";
			cin>>user;
			checking.withdraw(user);
			cout<<"\nWithdrawal made. Make another withdrawal (1) or finish and show stats (2)?";
			cin>>user;
		} while (user == 1);

		deposits = checking.deposits;
		withdrawals = checking.withdrawals;
		charges = checking.charges;

		checking.monthlyProc();

		cout<<"\n\nBeginning balance: "<<beginningBalance
			<<"\nDeposits made: "<<deposits
			<<"\nWithdrawals made: "<<withdrawals
			<<"\nService charges: "<<charges
			<<"\nEnding balance: "<<checking.balance;
	}
};
