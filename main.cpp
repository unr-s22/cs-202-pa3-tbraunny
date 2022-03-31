#include "Money.h"
#include "Account.h"

int main() {


 //Money operator test
	Money money(100, 25);
	std::cout << money << std::endl;

	Money money2(99, 25);
	if(money > money2){
		std::cout << "yeah" << std::endl;
	}
	else {
		std::cout << "nah" << std::endl;
	}

	if(money >= money2){
		std::cout << "yeah" << std::endl;
	}
	else {
		std::cout << "nah" << std::endl;
	}

	if(money <= money2){
		std::cout << "yeah" << std::endl;
	}
	else {
		std::cout << "nah" << std::endl;
	}

	if(money == money){
		std::cout << "yeah" << std::endl;
	}
	else {
		std::cout << "nah" << std::endl;
	}

	if(money != money){
		std::cout << "yeah" << std::endl;
	}
	else {
		std::cout << "nah" << std::endl;
	}

	std::cout << money2 << std::endl;

	auto testN{money - money2};

	std::cout << testN << std::endl;
	testN = money + money2;
	std::cout << testN << std::endl;

	return 0;
}

