#include"Schoolboy.h"
#include "Student.h"
#include"Aspirant.h"
#include <fstream>
#include <vector>
#include<algorithm>


void main() {
	/*
    
    -------------------------------------------------------------------------------ПРОВЕРКА РАБОТЫ КЛАССОВ----------------------------------------------------------------------------------------------
    
    Schoolboy Ivan("Ivanius","vlhadrjsvgai","+38050504640654");
	cout << "Schoolboy: " << endl;
	Ivan.ShowSchoolboy();
	cout << "-----------------------------------" << endl;
	
	cout << "Student: " << endl;
    Aspirant Petr("Petr Petrov","ksbel;","+965464665456", "Knoore", "Pdkjv","21.17.8796","Kotiki i sobachki loochie droozya");
	Student Ivan("Ivanius", "vlhadrjsvgai", "+38050504640654","Knoore","Pdkjv");
	Petr.Show();
	cout << "-----------------------------------" << endl;

	cout << "Aspirant: " << endl;
	Aspirant Andrey("Andrey Andreev", "andrey@gmail.com", "+5615694569", "KhAI", "RTSLA","12.25.2785","Samye vkoosnye chebooreki");
	Andrey.Show();
	cout << "-----------------------------------" << endl;

	Schoolboy Petr("Petr Petrov", "ksbel;", "+965464665456");
	Petr = Ivan;
	Petr.Show();
	cout << "-----------------------------------" << endl;
	Ivan.Show();
	cin >> Ivan;
	Ivan.ShowSchoolboy();
	cout << "-----------------------------------" << endl;
	/*Petr.ShowSchoolboy();
	cout << (Petr == Ivan)<<endl;
    cin >> Petr;
    cout << Petr;
    cin >> Petr;
    cout << Petr;
   Petr.Show();
	cout << "-----------------------------------" << endl;
	cout << Petr;*/
    
    /*
    //-------------------------------------------------------------------ПРОВЕРКА РАБОТЫ ЗАПИСИ В ФАЙЛ И ЧТЕНИЯ ИЗ ФАЙЛА--------------------------------------------------------------------------------------------

    Schoolboy Vasya;
    cin >> Vasya;
    cout << "_______________________________"<<endl;
    try {
        ofstream fout("file.txt");
        if (!fout) {
            throw 123;
            }
        fout << Vasya;
        fout.close();
    }

    catch (int) {
        cout << "ERROR OPENING FILE FOR WRITING!!!";
    }

    cout << "_______________________________" << endl;
    try {
        ifstream fin("file.txt");
        if (!fin) {
            throw 12.1f;
        }
        fin >> Vasya;
        fin.close();
        cout << Vasya;
    }

    catch (float) {
        cout << "ERROR OPENING FILE FOR READING!!!";
    }
    */
    /*

    //-------------------------------------------------------------------ПОМЕЩЕНИЕ ЭКЗЕМПЛЯРОВ КЛАССА В ВЕКТОР--------------------------------------------------------------------
    //Для хранения экземпляров класса был выбран контейнер STL <vector>, потому что это одновременно простое и надежное в обращении решение
    //для хранения и обработки небольших объемов данных лучшего решения не придумать. Так же, у нас есть опыт работы именно с этим контейнером.
    vector<Aspirant> vAsp;

    vAsp.push_back(Aspirant("Andrey Andreev", "andrey@gmail.com", "+5615694569", "KhAI", "RTSLA", "12.25.2785", "Samye vkoosnye chebooreki"));
    vAsp.push_back(Aspirant("Petr Petrov", "petr@gmail.com", "+88005553535", "KhAI", "REKSI", "22.15.1974", "Nasekomye i ikh znakomye"));
    vAsp.push_back(Aspirant("Ivan Ivanov", "ivan@gmail.com", "+14564665464", "KhNURE", "PooP", "35.85.4566", "Thema Dissertacii"));
    vAsp.push_back(Aspirant("Anna Annova", "ann@gmail.com", "+1564646487469", "YGJ", "FUJK", "12.10.2010", "kolbasa docktorskaya"));
    vAsp.push_back(Aspirant("Kim Chen Yn", "kim@gmail.com", "+6666666666666", "KIG", "QWE", "13.25.1468", "Kak nachat yadernooyoo voynoo"));

    for_each(vAsp.begin(), vAsp.end(), [](Aspirant &tmp) {cout << tmp << endl; });
    */
	system("pause");
}