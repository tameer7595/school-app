//
// Created by tameer on 9/4/19.
//

#include "school.h"

void School::pairTeacherToStudent(size_t ratio) {
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
