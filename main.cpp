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

	return 0;
}

