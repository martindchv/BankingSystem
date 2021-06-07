#pragma once
#include "SystemAccount.h"
#include "User/BankEmployee.h"

class Administrator : public virtual SystemAccount
{
	void parseFromString(std::string s);
public:
	Administrator() = default;
	Administrator(std::string username, std::string password);
	Administrator(std::string from_string);

	BankEmployee CreateEmployee() const;

	std::string ToString() const;
};
