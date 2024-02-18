#include "Student.h"
using namespace std;

Student::Student(){
  name = " ";
  credits = 0;
  major = "CSC";
}

string Student::getname(){
    return name;
}

int Student::getcredits(){
    return credits;
}

string Student::getmajor(){
    return major;
}

void Student::setname(string n){
    name = n;
}

void Student::setcredits(int c){
  if(c >= 0)
    credits = c;
  else
    credits = 0;
}

void Student::setmajor(string m){
  if (m == "CSC" || m == "CIS" || m == "CNT" || m == "GIS")
      major = m;
   else 
      major = "CSC";
}