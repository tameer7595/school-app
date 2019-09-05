//
// Created by tameer on 9/4/19.
//

#include "student.h"

Student :: Student(const std::string& name , unsigned char grade):Person(name),m_grade(grade){}

Student ::~Student() {
    std::cout << "student destructor" << std::endl ;
}
void Student :: action(){
    std::cout << "I'm a Student : " << getName()<< ",My grade : " << static_cast<int>(m_grade) << std::endl;
}
