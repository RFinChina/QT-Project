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
   Student();
   int student_sex;
};

#endif
