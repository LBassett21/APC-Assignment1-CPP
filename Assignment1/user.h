#pragma once
#include <iostream>
using namespace std;

class user
{
public:
	user(string, string, double);
	void setFirstName(string);
	void setLastName(string);
	void setID(double);
	string getFirstName() const;
	string getLastName() const;
	double getID() const;
	~user();
private:
	string firstname;
	string lastname;
	double ID;
};

