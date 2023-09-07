#include <iostream>

using namespace std;

//  struct = User defined data type.Use for different items to combine..


struct Teacher
{
  int teacherscale;
  char Favsubject;
  float salary;
};

struct Student
{
  int totalstudents;
  char section;
  float totalsubjects;
};

int main()
{

  Teacher teacher;
  Student student;

  cout << "What is teacher scale:" << endl;

  cin >> teacher.teacherscale;

  cout << "Enter teacher favsubject:" << endl;
  cin >> teacher.Favsubject;

  cout << "Enter teacher salary:" << endl;
  cin >> teacher.salary;

  cout << "Teacher scale is " << teacher.teacherscale << endl;
  cout << "Teacher is " << teacher.Favsubject << endl;
  cout << "Teacher is " << teacher.salary << endl;

  cout << "Enter students total strength:" << endl;

  cin >> student.totalstudents;

  cout << "Enter students section :" << endl;
  cin >> student.section;

  cout << "Enter total subjects:" << endl;
  cin >> student.totalsubjects;

  cout << "Total students are " << student.totalstudents << endl;
  cout << "Students section is " << student.section << endl;
  cout << "students subject " << student.totalsubjects << endl;

  return 0;
}
