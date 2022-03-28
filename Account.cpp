#include "Account.h"

void Account::makeDeposit(Money(int dollars , int cents)) {
    currentDollars += dollars;

    balanceSheet.push_back(new Money(dollars , cents));
}

void Account::makeWithdrawal(Money(int dollars , int cents)) {

}