//
// Created by tameer on 9/5/19.
//
#include <iostream>
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "school.h"
#include <list>
#include "test.h"
using std::string;
void Test::test() {
    std::cout << "Welcome To My School" << std::endl;
    std::vector<Person*> p = std::vector<Person*>(11);
    std::string student_names[8] = {"Tameer","Kameel","Rawad","Arwa","Sari","daniel","Ahmned","Shady"};
    std::string teacher_names[3] = {"Amitai","Ola","Margilit"};
    std::string leason_names[3] = {"c++","python","data stucture"};
    School school = initSchool(p,student_names,teacher_names,leason_names);
    std::cout<<"running action method:"<<std::endl;
    for(unsigned int i = 0 ; i < p.size() ; i++){
        p[i]->action();

    }

}

/* help func that print a list of the students paired with a certain teacher*/
School& Test:: initSchool(std::vector<Person*> &p,string student_names[],string teacher_names[],string leason_names[]){
    School *school  = new School();

    for (int i=0 ; i<8 ; i++){
        Student* student = new Student(student_names[i],96);
        school->addStudent(student);
        p[i] = student;
    }
    for (int i=8 ; i<11 ; i++){
        Teacher * teacher = new Teacher(teacher_names[i%3] ,leason_names[i%3]);
        school->addTeacher(teacher);
        p[i] = teacher;
    }

    school->pairTeacherToStudent(3);
    for ( int i = 0 ; i < 3; i++) {
        std::cout<< teacher_names[i]<<"'s Student:"<<std::endl;
        showTeachersStudent(*school,teacher_names[i]);
    }
    return *school;
}

void Test :: showTeachersStudent(School school , std::string teachername){
    std::list<Student *> l = school.getTeacherStudents(teachername);
    std::list<Student *>::iterator it;
    for (it = l.begin(); it != l.end(); ++it) {
        std::cout << '\t' << (*it)->getName();
        std::cout << '\n';
    }
}
