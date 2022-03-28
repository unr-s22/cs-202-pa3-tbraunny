#ifndef CS_202_PA3_TBRAUNNY_MONEY_H
#define CS_202_PA3_TBRAUNNY_MONEY_H

class Money {
private:
    int dollars;
    int cents;
public:
    Money();
    Money(int dollars , int cents): dollars(dollars) , cents(cents) {};

    int operator < (Money cents) {

    }
};

#endif //CS_202_PA3_TBRAUNNY_MONEY_H
