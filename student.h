//
// Created by tameer on 9/4/19.
//

#ifndef SCHOOLEXE_STUDENT_H
#define SCHOOLEXE_STUDENT_H

#include "person.h"

class Student : public Person{
public:
    Student(const std::string& , unsigned char grade);
    ~Student();
    void action();

private:
    unsigned char m_grade;
};

#endif //SCHOOLEXE_STUDENT_H
