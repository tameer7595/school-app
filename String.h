//
// Created by tameer on 9/5/19.
//

#ifndef SCHOOLEXE_STRING_H
#define SCHOOLEXE_STRING_H


#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;

class String {

public:
    String();

    String(const String &);

    String(const char *);

    ~String();

    size_t length() const;



    String& operator=(const String &s);

    String& operator+=(const String &);

    const String& operator+(const String &str);

    friend bool operator == (const String &,const String &);

    friend bool operator <= (const String &,const String &);

    friend bool operator < (const String &,const String &);

    friend bool operator > (const String &str,const String &);

    friend bool operator >= (const String &str,const String &);

    char &operator[](unsigned int);

    friend ostream &operator<<(ostream &os, const String &);
    const char* c_str() const;


    String substring(size_t start,size_t end);


private:

    char *m_buffer;


};
inline const char* String::c_str() const {
    return m_buffer;
}

#endif //SCHOOLEXE_STRING_H
