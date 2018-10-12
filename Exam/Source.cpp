#include"Schoolboy.h"
#include "Student.h"
#include"Aspirant.h"

void main() {
	//Schoolboy Ivan("Ivanius","vlhadrjsvgai","+38050504640654");
	//cout << "Schoolboy: " << endl;
	//Ivan.ShowSchoolboy();
	//cout << "-----------------------------------" << endl;
	
	//cout << "Student: " << endl;
    Aspirant Petr("Petr Petrov","ksbel;","+965464665456", "Knoore", "Pdkjv","21.17.8796","Kotiki i sobachki loochie droozya");
	//Student Ivan("Ivanius", "vlhadrjsvgai", "+38050504640654","Knoore","Pdkjv");
	Petr.Show();
	//cout << "-----------------------------------" << endl;

	//cout << "Aspirant: " << endl;
	Aspirant Andrey("Andrey Andreev", "kgbwssbrbel;", "+5615694569", "KhAI", "RTSLA","12.25.2785","Samye vkoosnye chebooreki");
	//Andrey.Show();
	//cout << "-----------------------------------" << endl;

	//Schoolboy Petr("Petr Petrov", "ksbel;", "+965464665456");
	//Petr = Ivan;
	//Petr.Show();
	//cout << "-----------------------------------" << endl;
	//Ivan.Show();
	//cin >> Ivan;
	//Ivan.ShowSchoolboy();
	cout << "-----------------------------------" << endl;
	/*Petr.ShowSchoolboy();*/
	//cout << (Petr == Ivan)<<endl;
   // cin >> Petr;
    //cout << Petr;
    Petr = Andrey;
    Petr.Show();
	//cout << "-----------------------------------" << endl;
	//cout << Petr;

	system("pause");
}