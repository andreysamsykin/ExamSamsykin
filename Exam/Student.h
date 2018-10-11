#pragma once
#include "Schoolboy.h"
class Student:public Schoolboy
{
	string Vooz;
	string Faculty;
public:

	Student();
	Student(const string Aname, const string AEmail, const string ATel, const string AVooz, const string AFaculty);
	
	void SetVooz(const string AVooz);
	string GetVooz();

	void SetFaculty(const string AFaculty);
	string GetFaculty();

	Student operator=( Student& NewBoy);
    bool operator==(Student &NewBoy);

	void Show();
	~Student();
};

