#pragma once
#include <string>

class Account
{
private:
	double balance;
	std::string name;
	
public:
	// Constructor
	Account(double bal_val = 1000.0, std::string name_val = "Default name");

	// Functions
	void DisplayStats();
	void Init(int args_given);

	void Deposit(double deposit_amount);
	void Withdraw(double withdraw_amount);

	// Deconstructor
	~Account();
};

