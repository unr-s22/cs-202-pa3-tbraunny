
#ifndef CS_202_PA3_TBRAUNNY_ACCOUNT_H
#define CS_202_PA3_TBRAUNNY_ACCOUNT_H
#include "Money.h"
#include <vector>

class Account : public Money {
private:
    bool balanceUpdate;
    std::vector<Money*> balanceSheet;
    int currentDollars;
    int currentCents;
protected:
    int dollars{0};
    int cents;
public:
    Account(int dollars , int cents):Money(dollars , cents){};
    void makeDeposit(Money(int dollars , int cents));
    void makeWithdrawal(Money(int dollars , int cents));

    friend std::ostream &operator<<(std::ostream &os, const Account &account) {
        os << "$" << account.currentDollars << std::endl;
        return os;
    }
};



#endif //CS_202_PA3_TBRAUNNY_ACCOUNT_H
