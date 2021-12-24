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

	// Functions
	void DisplayStats();
	void newAccountMessage(int given_args);

	// Deconstructor
	~Account();
};

