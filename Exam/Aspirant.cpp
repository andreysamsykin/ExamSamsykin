#include "Aspirant.h"



Aspirant::Aspirant()
{
}

Aspirant::Aspirant(const string Aname, const string AEmail, const string ATel, const string AVooz, const string AFaculty, const string ADate, const string AThemeDisser) :Student(Aname, AEmail, ATel, AVooz, AFaculty),Date(ADate),ThemeDisser(AThemeDisser){

}

void Aspirant::SetDate(const string ADate)
{
	Date = ADate;
}

string Aspirant::GetDate()
{
	return Date;
}

void Aspirant::SetThemeDisser(const string AThemeDisser)
{
	ThemeDisser = AThemeDisser;
}

string Aspirant::GetThemeDisser()
{
	return ThemeDisser;
}

void Aspirant::Show()
{
	Student::Show();
	cout << "Date: " << Date << endl << "Theme: " << ThemeDisser << endl;
}


Aspirant::~Aspirant()
{
}
