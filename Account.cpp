#include "Account.h"

void Account::makeDeposit(Money(int dollars , int cents)) {
	currentDollars += dollars;
	currentCents += cents;
	balanceSheet.push_back(new Money(dollars, cents));
	balanceUpdate = true;
}

void Account::makeWithdrawal(Money(int dollars , int cents)) {

	balanceUpdate = true;
}
