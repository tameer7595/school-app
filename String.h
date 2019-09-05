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

    int length() const;


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
    String substring(int start,int end);

private:
    int m_size;
    char *m_buffer;

    int lenOfChar(const char *);
};


#endif //SCHOOLEXE_STRING_H
