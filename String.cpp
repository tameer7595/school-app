//
// Created by tameer on 9/5/19.
//
#include "String.h"
#include<cstring>
#include <stdlib.h>
#include "StringManipulation.h"

String::String(){
    //cout<<"cont for empty cont"<<endl;
    m_buffer = (char*)malloc(sizeof(char));
    m_buffer[0] ='\0';

}

String::String(const char *str){
    m_buffer = (char*)malloc(sizeof(char)*(my_strlen(str)+1));
    my_strcpy(m_buffer,str);

}

String::String(const String & str){
    //cout<<"copy cont"<<endl;

    m_buffer =  (char*)malloc(sizeof(char)*(my_strlen(str.m_buffer)+1));
    my_strcpy(m_buffer,str.m_buffer);
}

String ::~String(){
    free(m_buffer) ;
}

size_t String :: length() const{
    return my_strlen((m_buffer));
}

String& String :: operator=(const String &str){
    free(m_buffer);
    m_buffer = (char*)malloc(sizeof(char)*(my_strlen(str.m_buffer)+1));
    my_strcpy(m_buffer,str.m_buffer);

    return *this;
}

String& String::operator+=(const String &str){
    char *temp =(char*) realloc(m_buffer,my_strlen(m_buffer)+my_strlen(str.m_buffer)+1);
    if(temp) {
        m_buffer = temp;
    }
    my_strcat(m_buffer,str.m_buffer);

    return *this;

}
ostream& operator<<(ostream &os, const String &str){

    os << str.m_buffer;
    return os;

}
char& String :: operator[] (unsigned int index){
    return m_buffer[index];
}
const String& String:: operator+(const String &str){
    String *newstr = new String();
    //newstr->m_buffer=new char[my_strlen(str.m_buffer)+my_strlen(m_buffer)+1];
    newstr->m_buffer=(char*)malloc(sizeof(char)*(my_strlen(str.m_buffer)+my_strlen(m_buffer)+1));
    my_strcat(newstr->m_buffer,this->m_buffer);
    my_strcat(newstr->m_buffer,str.m_buffer);
    return *newstr;

}
bool operator == (const String &firstStr, const String &secondStr) {
    if(my_strlen(secondStr.m_buffer)!= my_strlen(firstStr.m_buffer))
        return false;
    return !my_strcmp(firstStr.m_buffer, secondStr.m_buffer);
}
bool operator <= (const String &firstStr, const String &secondStr) {
    return !(firstStr>secondStr);
}
bool operator >= (const String &firstStr, const String &secondStr) {
    return !(firstStr < secondStr);

}
bool operator < (const String &firstStr, const String &secondStr){
    return my_strcmp(firstStr.m_buffer, secondStr.m_buffer) < 0;
}
bool operator > (const String &firstStr, const String &secondStr){
    return my_strcmp(firstStr.m_buffer, secondStr.m_buffer) > 0;
}

String String:: substring(size_t start,size_t end){
    if(start<0 || end >= my_strlen(this->m_buffer)) {
        cout << "BAD_INDEX";
        return NULL;
    }

    size_t len = end-start+1;
    //char *new_buffer = new char[len];
    char *new_buffer = (char*)malloc(sizeof(char)*len);
    size_t i=0;
    while(i < len-1){
        new_buffer[i]=this->m_buffer[i+start];
        i++;
    }
    new_buffer[i] = '\0';
    String substr(new_buffer);
    free(new_buffer);
    return substr;

}


