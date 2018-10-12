#pragma once
#include"Schoolboy.h"
#include<vector>
#include<algorithm>

using namespace std;
class FilterSchoolboy
{
    vector<Schoolboy> vect;
public:
    FilterSchoolboy(const vector<Schoolboy> &v) : vect(v) {}
    vector<Schoolboy> All();
    
    //им€ содержит
    FilterSchoolboy& nameContains(string name) {
        auto it = remove_if(vect.begin(), vect.end(), [name](Schoolboy p)
        {
            return p.GetName().find(name) == string::npos;
        });
        vect.erase(it, vect.end());
        return *this;
    }

    //им€ равно
    FilterSchoolboy& nameEqual(string name) {
        auto it = remove_if(vect.begin(), vect.end(), [name](Schoolboy p)
        {
            return p.GetName() != name;
        });
        vect.erase(it, vect.end());
        return *this;
    }

    //почта равна
    FilterSchoolboy& emailEqual(string email) {
        auto it = remove_if(vect.begin(), vect.end(), [email](Schoolboy p)
        {
            return p.GetEmail() != email;
        });
        vect.erase(it, vect.end());
        return *this;
    }

    //телефон равен
    FilterSchoolboy& telephEqual(string teleph) {
        auto it = remove_if(vect.begin(), vect.end(), [teleph](Schoolboy p)
        {
            return p.GetTeleph() != teleph;
        });
        vect.erase(it, vect.end());
        return *this;
    }

    ~FilterSchoolboy();
};

