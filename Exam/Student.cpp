#include "Student.h"



Student::Student(){

}

Student::Student(const string Aname, const string AEmail, const string ATel, const string AVooz, const string AFaculty) :Schoolboy(Aname, AEmail, ATel),Vooz(AVooz),Faculty(AFaculty){
}

void Student::SetVooz(const string AVooz){
	Vooz = AVooz;
}

string Student::GetVooz(){
	return string();
}

void Student::SetFaculty(const string AFaculty){
	Faculty = AFaculty;
}

string Student::GetFaculty(){
	return string();
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
    return false;
}


void Student::Show(){
	Schoolboy::ShowSchoolboy();
	cout << "Vooz: " << Vooz << endl << "Faculty: " << Faculty << endl;

}

Student::~Student(){
}
