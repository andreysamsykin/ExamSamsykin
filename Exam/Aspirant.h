#pragma once
#include "Student.h"
class Aspirant:public Student
{
	string Date;
	string ThemeDisser;
public:
	Aspirant();
	Aspirant(const string Aname, const string AEmail, const string ATel, const string AVooz, const string AFaculty,
								const string ADate, const string AThemeDisser);

	void SetDate(const string ADate);
	string GetDate();

	void SetThemeDisser(const string AThemeDisser);
	string GetThemeDisser();

	void Show();

	~Aspirant();
};
