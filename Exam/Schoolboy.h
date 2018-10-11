#pragma once
#include <iostream>
#include <string>

using namespace std;
class Schoolboy
{
	string FIO;
	string Email;
	string Teleph;
public:
	Schoolboy();
	Schoolboy(const string Aname, const string AEmail, const string ATel);

	void SetName(const string AName);
	string GetName();

	void SetEmail(const string AEmail);
	string GetEmail();

	void SetTeleph(const string APhone);
	string GetTeleph();

	virtual Schoolboy operator=(const Schoolboy& NewBoy);
	bool operator==(const Schoolboy& NewBoy);
	bool operator!=(const Schoolboy& NewBoy);
	
	void ShowSchoolboy();
	~Schoolboy();

};

istream& operator>>(istream& s, Schoolboy &NewBoy);
ostream& operator<<(ostream& s, Schoolboy &Newboy);

