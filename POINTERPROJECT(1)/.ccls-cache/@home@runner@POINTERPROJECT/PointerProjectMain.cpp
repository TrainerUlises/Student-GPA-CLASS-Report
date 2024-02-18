#include <iostream>
#include "Course.h"
using namespace std;

// Inputting Course data, using -> operator
void inputCourseData(Course* course) {
    string CourseNo;
    int credits;
    int classSize;
    
    cout << "Enter the Course #: ";
    cin >> CourseNo;
    course->setCourseNo(CourseNo);

    cout << "Enter class credits: ";
    cin >> credits;
    course->setcredits(credits);

    cout << "Enter class size: ";
    cin >> classSize;
    course->setstudentCount(classSize);
}

void inputStudentData(Course* course) {
    Student* roster = course->getroster();
    int studentCount = course->getstudentCount();
  
    // inputting student data - name, credits
    for (int i = 0; i < studentCount; i++) {
        string studentName;
        int studentCredits;

        cout << "Enter name for student: " << i + 1 << " " << endl;
        cin >> studentName;
        roster[i].setname(studentName);

        cout << "Enter credits for student: " << i + 1 << " " << endl;
        cin >> studentCredits;
        roster[i].setcredits(studentCredits);
    }
}

void creditsStats(int& maxCredits, int& minCredits, double& aveCredits, Course * course){
  Student* roster = course->getroster();
  int studentCount = course->getstudentCount();

  maxCredits = minCredits = roster[0].getcredits();
  double totalCredits = roster[0].getcredits();
    for(int i = 1; i < studentCount; i++){
      int credits = roster[i].getcredits();
      // MAX CREDITS
      if(credits > maxCredits){
        maxCredits = credits;
      }
    // MIN CREDITS
      if(credits < minCredits){
        minCredits = credits;
      }
  
      totalCredits += credits;
    }

    aveCredits = totalCredits/studentCount;
};


int main()
{
  Course * course;
  course = new Course();
  
  int maxcredits; int mincredits; double avecredits;

  inputCourseData(course);
  inputStudentData(course);
  
  creditsStats(maxcredits, mincredits, avecredits, course);

 
  cout << "MAX Credits: " << maxcredits << " MIN Credits: " << mincredits << " AVE Credits: " << avecredits<<endl;

  delete course;

}