#include"Schoolboy.h"
#include"FilterSchoolboy.h"
#include "Student.h"
#include"Aspirant.h"
#include <fstream>
#include <vector>
#include<algorithm>


void main() {

    //-------------------------------------------------------------------------------ПРОВЕРКА РАБОТЫ КЛАССОВ----------------------------------------------------------------------------------------------

	
    
  
   /* Aspirant Petr("Petr Petrov", "petr@gmail.com", "+88005553535", "KIG", "QWE", "13.25.1468", "Kak nachat yadernooyoo voynoo");
    Aspirant Ivan("Ivan Ivanov", "ivan@gmail.com", "+14564665464", "KhNURE", "PooP", "35.85.4566", "Thema Dissertacii");
	cout << "Schoolboy: " << endl;
    cout << Ivan<<endl;   //перегрузка вывода
    cout << "-----------------------------------" << endl;
    cout << (Ivan == Petr)<<endl;     //перегрузка оператора ==. выводится 0, т.к. Иван и Петр не равны
    cout << "-----------------------------------" << endl;
    cout << (Ivan!=Petr)<<endl;       //перегрузка оператора !=. выводится1, т.к Иван и Петр не равны
    cout << "-----------------------------------" << endl;
    Ivan = Petr;
    cout << Ivan << endl; //перегрузка оператора = 
	cout << "----------------------------------------------------------------------------------------------------------" << endl;

    Aspirant Andrey;
    cin >> Andrey;  //перегрузка >>. работает не совсем корректно. при вводе данных через пробел данные, введенные после пробела считываются как следующее поле
    cout << "-----------------------------------" << endl;
    cout << Andrey;*/

    //-------------------------------------------------------------------ПРОВЕРКА РАБОТЫ ЗАПИСИ В ФАЙЛ И ЧТЕНИЯ ИЗ ФАЙЛА--------------------------------------------------------------------------------------------

    
   
    
    /*Aspirant Vasya;
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
    

    //-------------------------------------------------------------------ПОМЕЩЕНИЕ ЭКЗЕМПЛЯРОВ КЛАССА В ВЕКТОР--------------------------------------------------------------------


    //Для хранения экземпляров класса был выбран контейнер STL <vector>, потому что это одновременно простое и надежное в обращении решение
    //для хранения и обработки небольших объемов данных лучшего решения не придумать. Так же, у нас есть опыт работы именно с этим контейнером.
    /*
    
    cout << "----------------------------Vector SCHOOLBOY:--------------------------------------" << endl;
   
    vector<Schoolboy> vSchoolboy;
                          //заполнение вектора
    vSchoolboy.push_back(Schoolboy("Andrey Andreev", "andrey@gmail.com", "+5615694569"));
    vSchoolboy.push_back(Schoolboy("Petr Petrov", "petr@gmail.com", "+88005553535"));
                         //вывод вектора
    //for_each(vSchoolboy.begin(), vSchoolboy.end(), [](Schoolboy &tmp) {cout << tmp << endl; });
    
                            //фильтрация вектора
    FilterSchoolboy filter(vSchoolboy);

                            //имя содержит
    //vector<Schoolboy> sorted = filter.nameContains("Andrey").All();
    
                            //имя равно
    //vector<Schoolboy> sorted = filter.nameEqual("Andrey Andreev").All();

                            //почта равна
    //vector<Schoolboy> sorted = filter.emailEqual("petr@gmail.com").All();

                            //телефон равен
    //vector<Schoolboy> sorted = filter.telephEqual("+88005553535").All();
    
                            //вывод отсортированного вектора
    //for_each(sorted.begin(), sorted.end(), [](Schoolboy &tmp) {cout << tmp << endl; });
   
    cout << "----------------------------Vector STUDENT:--------------------------------------" << endl;

    vector<Student> vStudent;
                            //заполнение вектора
    vStudent.push_back(Student("Andrey Andreev", "andrey@gmail.com", "+5615694569","Khai","RTSLA"));
    vStudent.push_back(Student("Petr Petrov", "petr@gmail.com", "+88005553535","KHURE","PooP"));

                            //вывод вектора
    for_each(vStudent.begin(), vStudent.end(), [](Student &tmp) {cout << tmp << endl; });




    cout << "----------------------------Vector Aspirant:--------------------------------------" << endl;
    vector<Aspirant> vAsp;
                            //заполнение 
    vAsp.push_back(Aspirant("Ivan Ivanov", "ivan@gmail.com", "+14564665464", "KhNURE", "PooP", "35.85.4566", "Thema Dissertacii"));
    vAsp.push_back(Aspirant("Anna Annova", "ann@gmail.com", "+1564646487469", "YGJ", "FUJK", "12.10.2010", "kolbasa docktorskaya"));
    vAsp.push_back(Aspirant("Kim Chen Yn", "kim@gmail.com", "+6666666666666", "KIG", "QWE", "13.25.1468", "Kak nachat yadernooyoo voynoo"));
                        
                            //вывод
    for_each(vAsp.begin(), vAsp.end(), [](Aspirant &tmp) {cout << tmp << endl; });

    //реализовать отсеивание объектов  получилось только для типа данных Schoolboy


    */
	system("pause");
}