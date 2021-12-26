#include "Account.h"
#include <iostream>
#include <string>

void Account::DisplayStats() {
	std::cout << "___________________________" << std::endl;
	std::cout << "Account name : " << this->name << std::endl;
	std::cout << "Account balance : " << this->balance << std::endl;
	std::cout << "___________________________" << std::endl;
}

void Account::Init(int args_given) {
	std::cout << "Account '" << name << "' created with : " << args_given << " arguments." << std::endl;
	this->DisplayStats();
}


// Constructors
Account::Account(double bal_val, std::string name_val )
	: balance{ bal_val }, name{ name_val }{
	this->Init(2);
}

Account::Account(std::string name_val)
	: Account{ 0, name_val } {
	this->Init(1);
}

Account::Account()
	: Account{ 0, "Default, mic" } {
	this->Init(0);
};


void Account::Deposit(double deposit_amount) {
	this->balance += deposit_amount;
	std::cout << std::endl;
	std::cout << deposit_amount << "$ added successfully." << std::endl;
	std::cout << "You current balance is now : " << balance << "$" << std::endl;
}

void Account::Withdraw(double withdraw_amount) {
	if (withdraw_amount <= balance)
		this->balance -= withdraw_amount;
	std::cout << std::endl;
	std::cout << withdraw_amount << "$ withdrawn successfully." << std::endl;
	std::cout << "You current balance is now : " << balance << "$" << std::endl;
}

Account::~Account() {
	std::cout << std::endl << std::endl;
	std::cout << "Destructor called for : " << name << std::endl;
}