#include <iostream>
using namespace std;
#include "Course.h"

Course::Course(){
  CourseNo = " ";
  credits = 3;
  roster = nullptr;
  studentCount = 12;

  roster = new Student[studentCount];
}

string Course::getCourseNo(){
  return CourseNo;
}

int Course::getcredits(){
  return credits;
}

Student* Course::getroster(){
  return roster;
}

int Course::getstudentCount(){
  return studentCount;
}

void Course::setCourseNo(string c){
  CourseNo = c;
}

void Course::setcredits(int c){
  if(c >= 0 && c <= 6)
    credits = c;
  else
    credits = 3;
}

void Course::setroster(Student *s){
  roster = s;
}

void Course::setstudentCount(int count){
  
  if(count >= 0 && count <= 25){
    studentCount = count;
  } else {
    studentCount = 12;
  }
  
  delete[] roster;

  roster = new Student[studentCount];
}
  
