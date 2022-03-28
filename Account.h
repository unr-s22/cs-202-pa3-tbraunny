#ifndef CS_202_PA3_TBRAUNNY_ACCOUNT_H
#define CS_202_PA3_TBRAUNNY_ACCOUNT_H
#include "Money.h"
#include <vector>

class Account : public Money {
private:
    std::vector<Money*> balanceSheet;
    int currentDollars;
    int currentCents;
public:
    Account(int dollars , int cents):Money(dollars , cents){};
    void makeDeposit(Money(int dollars , int cents));
    void makeWithdrawal(Money(int dollars , int cents));
};


#endif //CS_202_PA3_TBRAUNNY_ACCOUNT_H
