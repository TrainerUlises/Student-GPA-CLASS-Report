#include <iostream>
using namespace std;

class Student
{
private:
  string name;
  int credits;
  string major;
public:
  string getname();
  void setname(string);
  int getcredits();
  void setcredits(int);
  string getmajor();
  void setmajor(string);
  Student();
};
