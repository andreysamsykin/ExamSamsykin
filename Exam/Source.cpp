#include"Schoolboy.h"
#include"FilterSchoolboy.h"
#include "Student.h"
#include"Aspirant.h"
#include <fstream>
#include <vector>
#include<algorithm>


void main() {

    //-------------------------------------------------------------------------------�������� ������ �������----------------------------------------------------------------------------------------------

	
    
  
   /* Aspirant Petr("Petr Petrov", "petr@gmail.com", "+88005553535", "KIG", "QWE", "13.25.1468", "Kak nachat yadernooyoo voynoo");
    Aspirant Ivan("Ivan Ivanov", "ivan@gmail.com", "+14564665464", "KhNURE", "PooP", "35.85.4566", "Thema Dissertacii");
	cout << "Schoolboy: " << endl;
    cout << Ivan<<endl;   //���������� ������
    cout << "-----------------------------------" << endl;
    cout << (Ivan == Petr)<<endl;     //���������� ��������� ==. ��������� 0, �.�. ���� � ���� �� �����
    cout << "-----------------------------------" << endl;
    cout << (Ivan!=Petr)<<endl;       //���������� ��������� !=. ���������1, �.� ���� � ���� �� �����
    cout << "-----------------------------------" << endl;
    Ivan = Petr;
    cout << Ivan << endl; //���������� ��������� = 
	cout << "----------------------------------------------------------------------------------------------------------" << endl;

    Aspirant Andrey;
    cin >> Andrey;  //���������� >>. �������� �� ������ ���������. ��� ����� ������ ����� ������ ������, ��������� ����� ������� ����������� ��� ��������� ����
    cout << "-----------------------------------" << endl;
    cout << Andrey;*/

    //-------------------------------------------------------------------�������� ������ ������ � ���� � ������ �� �����--------------------------------------------------------------------------------------------

    
   
    
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
    

    //-------------------------------------------------------------------��������� ����������� ������ � ������--------------------------------------------------------------------


    //��� �������� ����������� ������ ��� ������ ��������� STL <vector>, ������ ��� ��� ������������ ������� � �������� � ��������� �������
    //��� �������� � ��������� ��������� ������� ������ ������� ������� �� ���������. ��� ��, � ��� ���� ���� ������ ������ � ���� �����������.
    /*
    
    cout << "----------------------------Vector SCHOOLBOY:--------------------------------------" << endl;
   
    vector<Schoolboy> vSchoolboy;
                          //���������� �������
    vSchoolboy.push_back(Schoolboy("Andrey Andreev", "andrey@gmail.com", "+5615694569"));
    vSchoolboy.push_back(Schoolboy("Petr Petrov", "petr@gmail.com", "+88005553535"));
                         //����� �������
    //for_each(vSchoolboy.begin(), vSchoolboy.end(), [](Schoolboy &tmp) {cout << tmp << endl; });
    
                            //���������� �������
    FilterSchoolboy filter(vSchoolboy);

                            //��� ��������
    //vector<Schoolboy> sorted = filter.nameContains("Andrey").All();
    
                            //��� �����
    //vector<Schoolboy> sorted = filter.nameEqual("Andrey Andreev").All();

                            //����� �����
    //vector<Schoolboy> sorted = filter.emailEqual("petr@gmail.com").All();

                            //������� �����
    //vector<Schoolboy> sorted = filter.telephEqual("+88005553535").All();
    
                            //����� ���������������� �������
    //for_each(sorted.begin(), sorted.end(), [](Schoolboy &tmp) {cout << tmp << endl; });
   
    cout << "----------------------------Vector STUDENT:--------------------------------------" << endl;

    vector<Student> vStudent;
                            //���������� �������
    vStudent.push_back(Student("Andrey Andreev", "andrey@gmail.com", "+5615694569","Khai","RTSLA"));
    vStudent.push_back(Student("Petr Petrov", "petr@gmail.com", "+88005553535","KHURE","PooP"));

                            //����� �������
    for_each(vStudent.begin(), vStudent.end(), [](Student &tmp) {cout << tmp << endl; });




    cout << "----------------------------Vector Aspirant:--------------------------------------" << endl;
    vector<Aspirant> vAsp;
                            //���������� 
    vAsp.push_back(Aspirant("Ivan Ivanov", "ivan@gmail.com", "+14564665464", "KhNURE", "PooP", "35.85.4566", "Thema Dissertacii"));
    vAsp.push_back(Aspirant("Anna Annova", "ann@gmail.com", "+1564646487469", "YGJ", "FUJK", "12.10.2010", "kolbasa docktorskaya"));
    vAsp.push_back(Aspirant("Kim Chen Yn", "kim@gmail.com", "+6666666666666", "KIG", "QWE", "13.25.1468", "Kak nachat yadernooyoo voynoo"));
                        
                            //�����
    for_each(vAsp.begin(), vAsp.end(), [](Aspirant &tmp) {cout << tmp << endl; });

    //����������� ���������� ��������  ���������� ������ ��� ���� ������ Schoolboy


    */
	system("pause");
}