// Banking System made by : Michael Lacroix

#include <iostream>
#include "Account.h"

int main()
{
	Account jeff;
	Account steph{ 200.0 };
	Account mic{ 1000.0, "Michael" };
	mic.Deposit(500.0);
	mic.Withdraw(200.09);
}
