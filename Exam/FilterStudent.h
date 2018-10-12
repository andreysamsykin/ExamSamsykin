#pragma once
#include"Student.h"
#include<algorithm>
#include<vector>
class FilterStudent
{
    vector<Student> newvect;
public:
    FilterStudent(const vector<Student> &v) :newvect(v) {}
    vector<Student> All();

    /*FilterStudent& voozEqual(string myvooz) {
       auto itt = remove_if(newvect.begin(), newvect.end(), [myvooz](Student h) {
           return h.GetVooz() != myvooz;
        });
       newvect.erase(newvect.begin(), newvect.end());
        return *this;
    }*/
    
    ~FilterStudent();
};

