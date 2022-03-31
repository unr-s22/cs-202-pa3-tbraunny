#ifndef CS_202_PA3_TBRAUNNY_MONEY_H
#define CS_202_PA3_TBRAUNNY_MONEY_H

#include <iostream>

class Money {
private:
	//int dollars{0};
	int all_cents{0};
public:
    Money();
    Money(int dollars , int cents): all_cents(dollars * 100 + cents) {};


    friend std::ostream &operator<<(std::ostream &os, const Money &money) {
		os << "$" << money.all_cents * 0.01;
		return os;
	}
	bool operator<(const Money &rhs) const {
		return all_cents < rhs.all_cents;
	}

	bool operator>(const Money &rhs) const {
		return all_cents > rhs.all_cents;
	}
	//idk what this is but I'll leave it just in case: int operator < (Money cents) {}



};

#endif //CS_202_PA3_TBRAUNNY_MONEY_H
