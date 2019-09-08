//
// Created by tameer on 9/4/19.
//
#include<iostream>
#ifndef SCHOOLEXE_PERSON_H
#define SCHOOLEXE_PERSON_H
#include"String.h"
class Person{
public:
    Person(const String&);
    virtual ~Person();
    const String& getName() const;
    size_t getId() const;
    virtual void action() = 0;
private:
    static size_t s_count; /* manage the id member,increase it every time we create a new object person;*/
    size_t m_id ;
    String m_name;
};


inline Person :: Person(const String& name) {
    m_name = name;
    m_id = ++s_count;
}

inline Person ::~Person() {

}

inline  const String& Person:: getName() const{
    return m_name;
}

inline size_t Person :: getId() const{
    return m_id;
}


#endif //SCHOOLEXE_PERSON_H