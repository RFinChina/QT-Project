#ifndef STUDENT_H__
#define STUDENT_H__

#include "include/people.h"
#include <iostream>

using namespace std;

class Student:public People
{
public:
   void study();
   void sex();
   Student(int x):People(x){}
   Student(int x,int y):People(x){
       cout<<"x="<<x<<"y="<<y<<endl;
   }
   int student_sex;
   void speak();
};

#endif
