//
// Created by tameer on 9/4/19.
//
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include "student.h"
#include "teacher.h"
#include "String.h"
#ifndef SCHOOLEXE_SCHOOL_H
#define SCHOOLEXE_SCHOOL_H
typedef std::vector<Student*> pStudentVector;
typedef std::vector<Teacher*> pTeacherVector;
typedef std::map< String,std::list<Student*> > Map_Teacher_Students;
typedef std::pair< String, std::list<Student*> > Pair_For_Map;
class School{
public:
    void addStudent(Student* student);
    void addTeacher(Teacher* teacher);
    size_t getNumOfStudents() const;
    size_t getNumOfTeachers() const;
    void pairTeacherToStudent(size_t ratio);
    std::list<Student*> getTeacherStudents(const String& teacherName) const;
private:
    pStudentVector m_students; // std::vector<Student*>
    pTeacherVector m_teachers; // std::vector<Teacher*>
    Map_Teacher_Students my_map; //typdef and give a nice name

};
inline void School :: addStudent(Student* student){
    m_students.push_back(student);
}
inline void School::addTeacher(Teacher *teacher) {
    m_teachers.push_back(teacher);
}
inline size_t School::getNumOfStudents() const {
    return m_students.size();
}
inline size_t School::getNumOfTeachers() const {
    return m_teachers.size();
}
inline std::list<Student*> School:: getTeacherStudents(const String& teacherName) const{
    return my_map.find(teacherName)->second;
}
#endif //SCHOOLEXE_SCHOOL_H
