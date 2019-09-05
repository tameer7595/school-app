//
// Created by tameer on 9/4/19.
//

#include "teacher.h"
Teacher :: Teacher(const std::string& name,const std::string& leason) : Person(name),m_leason(leason){}

Teacher :: ~Teacher(){
    std::cout<<"tacher destructor"<<std::endl;
}

void Teacher :: action(){
    std::cout << "I'm a Teacher : " << getName() << ",Teaching : " << m_leason << std::endl;
}