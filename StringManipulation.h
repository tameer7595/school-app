//
// Created by tameer on 9/8/19.
//

#ifndef SCHOOLEXE_STRINGMANIPULATION_H
#define SCHOOLEXE_STRINGMANIPULATION_H
//
// Created by tameer on 9/8/19.
//

#ifndef STRING_STRINGMANIPULATION_H
#define STRING_STRINGMANIPULATION_H
int my_strcmp(const char* firstStr,const char* secondStr){
    const char* s1 = firstStr;
    const char* s2 = secondStr;
    while(*s1 && *s1 == *s2){
        s1++;
        s2++;
    }

    return *s1-*s2;
}
void my_strcpy(char* dst ,const char* src){
    while((*dst++ = *src++)){}
}
size_t my_strlen(const char str[]){
    size_t  wordCount = 0;
    while(str[wordCount++]){}
    return --wordCount;
}
void my_strcat(char str[],const char str1[]){
    while((*str++)){}
    --str;
    while((*str++ = *str1++)){}
}

#endif //STRING_STRINGMANIPULATION_H

#endif //SCHOOLEXE_STRINGMANIPULATION_H
