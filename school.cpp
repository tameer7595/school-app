//
// Created by tameer on 9/4/19.
//

#include "school.h"

void School :: addStudent(Student* student){
    m_students.push_back(student);
}
void School::addTeacher(Teacher *teacher) {
    m_teachers.push_back(teacher);
}
size_t School::getNumOfStudents() const {
    return m_students.size();
}
size_t School::getNumOfTeachers() const {
    return m_teachers.size();
}
void School::pairTeacherToStudent(size_t ratio) {
    size_t count = 0 ;
    std::list<Student*> temp;
    for(size_t i = 0 ; i < m_teachers.size() ; i++) {
        size_t j=0;
        while(j < ratio){
            temp.push_back(m_students[(count++)%m_students.size()]);
            j++;
        }
        my_map.insert(std::pair< std::string, std::list<Student*> >(m_teachers[i]->getName(),temp));
        temp.clear();
    }

}
std::list<Student*> School:: getTeacherStudents(const std::string& teacherName) const{
    return my_map.find(teacherName)->second;
}