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
	// Copy Constructor
	Account(const Account& source);

	// Functions
	void DisplayStats();

	void Deposit(double deposit_amount);
	void Withdraw(double withdraw_amount);


	// Deconstructor
	~Account();
};

