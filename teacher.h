//
// Created by tameer on 9/4/19.
//
#include "person.h"
#ifndef SCHOOLEXE_TEACHER_H
#define SCHOOLEXE_TEACHER_H
class Teacher : public Person{
public:
    Teacher(const std::string&,const std::string&);
    ~Teacher();
    void action();
private:
    std::string m_leason;
};
#endif //SCHOOLEXE_TEACHER_H
