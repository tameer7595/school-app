//
// Created by tameer on 9/4/19.
//

#ifndef SCHOOLEXE_STUDENT_H
#define SCHOOLEXE_STUDENT_H

#include "person.h"
#include "String.h"
class Student : public Person{
public:
    Student(const String& , unsigned char grade);
    ~Student();
    void action();

private:
    unsigned char m_grade;
};

inline Student :: Student(const String& name , unsigned char grade):Person(name),m_grade(grade){}

inline Student ::~Student() {
    std::cout << "student destructor" << std::endl ;
}
inline void Student :: action(){
    std::cout << "I'm a Student : " << getName()<< ",My grade : " << static_cast<int>(m_grade) << std::endl;
}


#endif //SCHOOLEXE_STUDENT_H
