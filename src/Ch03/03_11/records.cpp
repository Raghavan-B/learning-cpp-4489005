#include "records.h"
#include <string.h>

Student::Student (int id_i, std::string name_i) {
    id = id_i;
    name = name_i;
}
int Student::get_id() const {
    return id;
}
std::string Student::get_name() const {
    return name;
}

Course::Course (int id_i, std::string name_i, unsigned char credits_i) {
    id = id_i;
    name = name_i;
    credits = credits_i;
}
int Course::get_id() const {
    return id;
}
std::string Course::get_name() const {
    return name;
}
int Course::get_credits() const{
    return credits;
}

Grade::Grade (int id_i, int c_id, char grade_i) {
    student_id = id_i;
    course_id = c_id;
    grade = grade_i;
}
int Grade::get_student_id() const {
    return student_id;
}
int Grade::get_course_id() const {
    return course_id;
}
char Grade::get_grade() const{
    return grade;
}
