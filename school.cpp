//
// Created by tameer on 9/4/19.
//

#include "school.h"
size_t School:: m_ratio = 0;
void School::pairTeacherToStudent(size_t ratio) {
    my_map.clear();
    setratio(ratio);// save the current ratio
    size_t count = 0 ;
    std::list<Student*> temp;

    for(size_t i = 0 ; i < m_teachers.size() ; i++) {
        size_t j=0;
        while(j < ratio){
            temp.push_back(m_students[(count++)%m_students.size()]);
            j++;
        }
        my_map.insert(Pair_For_Map(m_teachers[i]->getName(),temp));
        temp.clear();
    }

}


void School::deleteStudent(size_t id) {
    for(std::vector<Student*>::iterator it = m_students.begin(); it != m_students.end(); ++it)
    {
        if((*it)->getId() == id)
            m_students.erase(it);
    }
    pairTeacherToStudent(m_ratio);
}
void School::deleteTeacher(size_t id) {

    for(std::vector<Teacher*>::iterator it = m_teachers.begin(); it != m_teachers.end(); ++it)
    {

        if((*it)->getId() == id) {
            my_map.erase((*it)->getName());
            m_teachers.erase(it);

        }
    }
    pairTeacherToStudent(m_ratio);// update my_map after deleting
}
 // set the last ration in a static member
void School:: setratio(size_t r){
    m_ratio = r;
}
