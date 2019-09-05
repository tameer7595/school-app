//
// Created by tameer on 9/5/19.
//

#ifndef SCHOOLEXE_TEST_H
#define SCHOOLEXE_TEST_H

#include "school.h"
using std::string;
class Test{
public:
    void test();
    void showTeachersStudent(School school , std::string teachername);
    School& initSchool(std::vector<Person*> &p,string student_names[],string teacher_names[],string leason_names[]);
};
#endif //SCHOOLEXE_TEST_H
