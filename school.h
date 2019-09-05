//
// Created by tameer on 9/4/19.
//
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include "student.h"
#include "teacher.h"

#ifndef SCHOOLEXE_SCHOOL_H
#define SCHOOLEXE_SCHOOL_H
class School{
public:
    void addStudent(Student* student);
    void addTeacher(Teacher* teacher);
    size_t getNumOfStudents() const;
    size_t getNumOfTeachers() const;
    void pairTeacherToStudent(size_t ratio);
    std::list<Student*> getTeacherStudents(const std::string& teacherName) const;
private:
    std::vector<Student*> m_students; // typedef and give a nice name
    std::vector<Teacher*> m_teachers; // typdef and give a nice name
    std::map<std::string,std::list<Student*> > my_map; //typdef and give a nice name

};

#endif //SCHOOLEXE_SCHOOL_H
