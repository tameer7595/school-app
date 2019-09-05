//
// Created by tameer on 9/5/19.
//

#ifndef SCHOOLEXE_TEST_H
#define SCHOOLEXE_TEST_H

#include "school.h"
#include "String.h"
class Test{
public:
    void test();
    void showTeachersStudent(School school , String teachername);
    School* initSchool(std::vector<Person*> &p,String student_names[],String teacher_names[],String leason_names[]);
};
#endif //SCHOOLEXE_TEST_H
