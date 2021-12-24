#include "Account.h"
#include <iostream>
#include <string>

void Account::DisplayStats() {
	std::cout << "___________________________" << std::endl;
	std::cout << "Account name : " << this->name << std::endl;
	std::cout << "Account balance : " << this->balance << std::endl;
	std::cout << "___________________________" << std::endl;
}

void Account::newAccountMessage(int given_args) {
	std::cout << "New account created with : " << given_args << " arguments given." << std::endl;
	std::cout << "Details about the new account below : " << std::endl;
	this->DisplayStats();
}

Account::Account() : balance{ 100 }, name{ "Default" } {
	this->newAccountMessage(0);
};

Account::~Account() {
	std::cout << "Destructor called for : " << name << std::endl;
}