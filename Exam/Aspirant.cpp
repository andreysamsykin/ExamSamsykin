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

Aspirant Aspirant::operator=(Aspirant & NewBoy)
{

    Aspirant::SetName(NewBoy.GetName());
    Aspirant::SetEmail(NewBoy.GetEmail());
    Aspirant::SetTeleph(NewBoy.GetTeleph());
    Aspirant::SetVooz(NewBoy.GetVooz());
    Aspirant::SetFaculty(NewBoy.GetFaculty());
    Date = NewBoy.Date;
    ThemeDisser = NewBoy.ThemeDisser;
    return Aspirant();
}

bool Aspirant::operator==(Aspirant & NewBoy)
{
    if (ThemeDisser == NewBoy.GetThemeDisser() && Date == NewBoy.GetDate() && Aspirant::GetVooz() == NewBoy.GetVooz() && Aspirant::GetFaculty() == NewBoy.GetFaculty() &&
        Aspirant::GetName() == NewBoy.GetName() && Aspirant::GetEmail() == NewBoy.GetEmail() && Aspirant::GetTeleph() == NewBoy.GetTeleph()) return true;
    else  return false;
}

bool Aspirant::operator!=(Aspirant & NewBoy)
{
    if (ThemeDisser != NewBoy.GetThemeDisser() && Date != NewBoy.GetDate() && Aspirant::GetVooz() != NewBoy.GetVooz() && Aspirant::GetFaculty() != NewBoy.GetFaculty() &&
        Aspirant::GetName() != NewBoy.GetName() && Aspirant::GetEmail() != NewBoy.GetEmail() && Aspirant::GetTeleph() != NewBoy.GetTeleph()) return true;
    else  return false;
}

void Aspirant::Show()
{
	Student::Show();
	cout << "Date: " << Date << endl << "Theme: " << ThemeDisser << endl;
}


Aspirant::~Aspirant()
{
}
