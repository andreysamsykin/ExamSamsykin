#include"Schoolboy.h"
#include"FilterSchoolboy.h"
#include "Student.h"
#include"Aspirant.h"
#include <fstream>
#include <vector>
#include<algorithm>


void main() {

    //-------------------------------------------------------------------------------ÏÐÎÂÅÐÊÀ ÐÀÁÎÒÛ ÊËÀÑÑÎÂ----------------------------------------------------------------------------------------------

	
    
  
   /* Aspirant Petr("Petr Petrov", "petr@gmail.com", "+88005553535", "KIG", "QWE", "13.25.1468", "Kak nachat yadernooyoo voynoo");
    Aspirant Ivan("Ivan Ivanov", "ivan@gmail.com", "+14564665464", "KhNURE", "PooP", "35.85.4566", "Thema Dissertacii");
	cout << "Schoolboy: " << endl;
    cout << Ivan<<endl;   //ïåðåãðóçêà âûâîäà
    cout << "-----------------------------------" << endl;
    cout << (Ivan == Petr)<<endl;     //ïåðåãðóçêà îïåðàòîðà ==. âûâîäèòñÿ 0, ò.ê. Èâàí è Ïåòð íå ðàâíû
    cout << "-----------------------------------" << endl;
    cout << (Ivan!=Petr)<<endl;       //ïåðåãðóçêà îïåðàòîðà !=. âûâîäèòñÿ1, ò.ê Èâàí è Ïåòð íå ðàâíû
    cout << "-----------------------------------" << endl;
    Ivan = Petr;
    cout << Ivan << endl; //ïåðåãðóçêà îïåðàòîðà = 
	cout << "----------------------------------------------------------------------------------------------------------" << endl;

    Aspirant Andrey;
    cin >> Andrey;  //ïåðåãðóçêà >>. ðàáîòàåò íå ñîâñåì êîððåêòíî. ïðè ââîäå äàííûõ ÷åðåç ïðîáåë äàííûå, ââåäåííûå ïîñëå ïðîáåëà ñ÷èòûâàþòñÿ êàê ñëåäóþùåå ïîëå
    cout << "-----------------------------------" << endl;
    cout << Andrey;*/

    //-------------------------------------------------------------------ÏÐÎÂÅÐÊÀ ÐÀÁÎÒÛ ÇÀÏÈÑÈ Â ÔÀÉË È ×ÒÅÍÈß ÈÇ ÔÀÉËÀ--------------------------------------------------------------------------------------------

    
   
    
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
    

    //-------------------------------------------------------------------ÏÎÌÅÙÅÍÈÅ ÝÊÇÅÌÏËßÐÎÂ ÊËÀÑÑÀ Â ÂÅÊÒÎÐ--------------------------------------------------------------------


    //Äëÿ õðàíåíèÿ ýêçåìïëÿðîâ êëàññà áûë âûáðàí êîíòåéíåð STL <vector>, ïîòîìó ÷òî ýòî îäíîâðåìåííî ïðîñòîå è íàäåæíîå â îáðàùåíèè ðåøåíèå
    //äëÿ õðàíåíèÿ è îáðàáîòêè íåáîëüøèõ îáúåìîâ äàííûõ ëó÷øåãî ðåøåíèÿ íå ïðèäóìàòü. Òàê æå, ó íàñ åñòü îïûò ðàáîòû èìåííî ñ ýòèì êîíòåéíåðîì.
    /*
    
    cout << "----------------------------Vector SCHOOLBOY:--------------------------------------" << endl;
   
    vector<Schoolboy> vSchoolboy;
                          //çàïîëíåíèå âåêòîðà
    vSchoolboy.push_back(Schoolboy("Andrey Andreev", "andrey@gmail.com", "+5615694569"));
    vSchoolboy.push_back(Schoolboy("Petr Petrov", "petr@gmail.com", "+88005553535"));
                         //âûâîä âåêòîðà
    //for_each(vSchoolboy.begin(), vSchoolboy.end(), [](Schoolboy &tmp) {cout << tmp << endl; });
    
                            //ôèëüòðàöèÿ âåêòîðà
    FilterSchoolboy filter(vSchoolboy);

                            //èìÿ ñîäåðæèò
    //vector<Schoolboy> sorted = filter.nameContains("Andrey").All();
    
                            //èìÿ ðàâíî
    //vector<Schoolboy> sorted = filter.nameEqual("Andrey Andreev").All();

                            //ïî÷òà ðàâíà
    //vector<Schoolboy> sorted = filter.emailEqual("petr@gmail.com").All();

                            //òåëåôîí ðàâåí
    //vector<Schoolboy> sorted = filter.telephEqual("+88005553535").All();
    
                            //âûâîä îòñîðòèðîâàííîãî âåêòîðà
    //for_each(sorted.begin(), sorted.end(), [](Schoolboy &tmp) {cout << tmp << endl; });
   
    cout << "----------------------------Vector STUDENT:--------------------------------------" << endl;

    vector<Student> vStudent;
                            //çàïîëíåíèå âåêòîðà
    vStudent.push_back(Student("Andrey Andreev", "andrey@gmail.com", "+5615694569","Khai","RTSLA"));
    vStudent.push_back(Student("Petr Petrov", "petr@gmail.com", "+88005553535","KHURE","PooP"));

                            //âûâîä âåêòîðà
    for_each(vStudent.begin(), vStudent.end(), [](Student &tmp) {cout << tmp << endl; });




    cout << "----------------------------Vector Aspirant:--------------------------------------" << endl;
    vector<Aspirant> vAsp;
                            //çàïîëíåíèå 
    vAsp.push_back(Aspirant("Ivan Ivanov", "ivan@gmail.com", "+14564665464", "KhNURE", "PooP", "35.85.4566", "Thema Dissertacii"));
    vAsp.push_back(Aspirant("Anna Annova", "ann@gmail.com", "+1564646487469", "YGJ", "FUJK", "12.10.2010", "kolbasa docktorskaya"));
    vAsp.push_back(Aspirant("Kim Chen Yn", "kim@gmail.com", "+6666666666666", "KIG", "QWE", "13.25.1468", "Kak nachat yadernooyoo voynoo"));
                        
                            //âûâîä
    for_each(vAsp.begin(), vAsp.end(), [](Aspirant &tmp) {cout << tmp << endl; });

    //ðåàëèçîâàòü îòñåèâàíèå îáúåêòîâ  ïîëó÷èëîñü òîëüêî äëÿ òèïà äàííûõ Schoolboy


    */
	//gfgf
	system("pause");
}
