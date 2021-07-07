#ifndef PEOPLE_H__
#define PEOPLE_H__

#include <iostream>
using namespace std;

class People
{
public:
    void eat();
    People(int sex){
        this->g_sex = sex;
    }
    int g_sex;
    virtual void speak() = 0 ;
};

#endif
