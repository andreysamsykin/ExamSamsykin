#include "Student.h"



Student::Student(){

}

Student::Student(const string Aname, const string AEmail, const string ATel, const string AVooz, const string AFaculty) :Schoolboy(Aname, AEmail, ATel),Vooz(AVooz),Faculty(AFaculty){
}

void Student::SetVooz(const string AVooz){
	Vooz = AVooz;
}

string Student::GetVooz(){
	return Vooz;
}

void Student::SetFaculty(const string AFaculty){
	Faculty = AFaculty;
}

string Student::GetFaculty(){
	return Faculty;
}

Student Student::operator=(Student & NewBoy)
{
	Student::SetName(NewBoy.GetName());
    Student::SetEmail(NewBoy.GetEmail());
    Student::SetTeleph(NewBoy.GetTeleph());
	Vooz = NewBoy.Vooz;
	Faculty = NewBoy.Faculty;
	return Student();
}

bool Student::operator==(Student & NewBoy)
{
    if (Vooz == NewBoy.Vooz && Faculty == NewBoy.Faculty && Student::GetName() == NewBoy.GetName() && Student::GetEmail() == NewBoy.GetEmail() && Student::GetTeleph() == NewBoy.GetTeleph())  return true;
    else return false;
}

bool Student::operator!=(Student & NewBoy)
{
    if (Vooz != NewBoy.Vooz && Faculty != NewBoy.Faculty && Student::GetName() != NewBoy.GetName() && Student::GetEmail() != NewBoy.GetEmail() && Student::GetTeleph() != NewBoy.GetTeleph())  return true;
    else return false;
}


void Student::Show(){
	Schoolboy::ShowSchoolboy();
	cout << "Vooz: " << Vooz << endl << "Faculty: " << Faculty << endl;

}

Student::~Student(){
}

istream & operator>>(istream & s, Student & NewBoy)
{
    string FIO, EMAIL, TELEPH,VOOZ,FACULTY;
    s >> FIO;
    s >> EMAIL;
    s >> TELEPH;
    s >> VOOZ;
    s >> FACULTY;
    NewBoy.SetName(FIO);
    NewBoy.SetEmail(EMAIL);
    NewBoy.SetTeleph(TELEPH);
    NewBoy.SetVooz(VOOZ);
    NewBoy.SetFaculty(FACULTY);
    return s;
}

ostream & operator<<(ostream & s, Student & NewBoy)
{
    s <<  NewBoy.GetName() << endl <<  NewBoy.GetEmail() << endl <<  NewBoy.GetTeleph() << endl;
    s <<  NewBoy.GetVooz() << endl <<  NewBoy.GetFaculty() << endl;
    return s;
}