#pragma once
#include <string>

class Account
{
private:
	double balance;
	std::string name;
	
public:
	// Constructor
	Account();
	Account(std::string name_val);
	Account(double bal_val, std::string name_val);

	// Functions
	void DisplayStats();
	void Init(int args_given);

	void Deposit(double deposit_amount);
	void Withdraw(double withdraw_amount);

	// Deconstructor
	~Account();
};

