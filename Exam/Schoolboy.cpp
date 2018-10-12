#include "Schoolboy.h"



Schoolboy::Schoolboy(){


}

Schoolboy::Schoolboy(const string Aname, const string AEmail, const string ATel)
{
	SetName(Aname);
	SetEmail(AEmail);
	SetTeleph(ATel);
}

void Schoolboy::SetName(const string AName)
{
	FIO = AName;
}

string Schoolboy::GetName()
{
	return FIO;
}

void Schoolboy::SetEmail(const string AEmail)
{
	Email = AEmail;
}

string Schoolboy::GetEmail()
{
	return Email;
}

void Schoolboy::SetTeleph(const string APhone)
{
	Teleph = APhone;
}

string Schoolboy::GetTeleph()
{
	return Teleph;
}

Schoolboy Schoolboy::operator=(const Schoolboy & NewBoy)
{
	FIO = NewBoy.FIO;
	Email = NewBoy.Email;
	Teleph = NewBoy.Teleph;
	return Schoolboy();
}

bool Schoolboy::operator==(const Schoolboy & NewBoy)
{
	if (FIO == NewBoy.FIO && Email == NewBoy.Email && Teleph == NewBoy.Teleph)
		return true;
	else return false;
}

bool Schoolboy::operator!=(const Schoolboy & NewBoy)
{
	if (FIO == NewBoy.FIO && Email == NewBoy.Email && Teleph == NewBoy.Teleph)
		return false;
	else return true;
}

istream & operator >> (istream& s, Schoolboy &NewBoy)
{
	string FIO, EMAIL, TELEPH;
	s >> FIO;
	s >> EMAIL;
	s >> TELEPH;
	NewBoy.SetName(FIO);
	NewBoy.SetEmail(EMAIL);
	NewBoy.SetTeleph(TELEPH);
	return s;
}

ostream & operator<<(ostream & s, Schoolboy &Newboy)
{
	s << Newboy.GetName() << endl <<  Newboy.GetEmail() << endl << Newboy.GetTeleph() << endl;
	return s;
}


void Schoolboy::ShowSchoolboy()
{

	cout << "Full name: " << FIO << endl << "E-mail: " << Email << endl << "Telephone: " << Teleph << endl;
	
}

Schoolboy::~Schoolboy(){

}
