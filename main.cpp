#include "Money.h"
#include "Account.h"

int main() {
	Money m(100 , 10);
	Money n(100 , 15);
	std::cout << m << std::endl;

	if (m < n) {
		std::cout << "m is greater than n" << std::endl;
	}
}\
Money.h:
#ifndef CS_202_PA3_TBRAUNNY_MONEY_H
#define CS_202_PA3_TBRAUNNY_MONEY_H

