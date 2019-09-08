//
// Created by tameer on 9/4/19.
//
#include "person.h"
#include "String.h"
#ifndef SCHOOLEXE_TEACHER_H
#define SCHOOLEXE_TEACHER_H
class Teacher : public Person{
public:
    Teacher(const String&,const String&);
    ~Teacher();
    void action();
private:
    String m_leason;
};
inline Teacher :: Teacher(const String& name,const String& leason) : Person(name),m_leason(leason){}

inline Teacher :: ~Teacher(){
}

inline void Teacher :: action(){
    std::cout << "I'm a Teacher : " << getName() << ",Teaching : " << m_leason << std::endl;
}
#endif //SCHOOLEXE_TEACHER_H
