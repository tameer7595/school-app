//
// Created by tameer on 9/4/19.
//
#include<iostream>
#ifndef SCHOOLEXE_PERSON_H
#define SCHOOLEXE_PERSON_H
class Person{
public:
    Person(const std::string&);
    virtual ~Person();
    const std::string& getName() const;
    size_t getId() const;
    virtual void action() = 0;
private:
    static size_t s_count; /* manage the id member,increase it every time we create a new object person;*/
    size_t m_id ;
    std::string m_name;
};


inline Person :: Person(const std::string& name) {
    m_name = name;
    m_id = ++s_count;
}

inline Person ::~Person() {
    std::cout << "person destructor" << std::endl;
}

inline  const std::string& Person:: getName() const{
    return m_name;
}

inline size_t Person :: getId() const{
    return m_id;
}


#endif //SCHOOLEXE_PERSON_H