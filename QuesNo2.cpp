#include <iostream>
#include <string>

//Structure using array..

using namespace std;

struct Student
{
    string name;
    int age;
    float GPA;
};

int main()
{

    int numStudent = 5;
    Student student[numStudent];

    for (int i = 0; i < numStudent; i++)
    {
        cout << "Student " << i + 1;
        cout << "Name:" << endl;
        cin >> student[i].name;
        cout << "Age: " << endl;
        cin >> student[i].age;
        cout << "GPA: " << endl;
        cin >> student[i].GPA;
    }

    for (int i = 0; i < numStudent; i++)
    {
        cout << "Data of student: " << i + 1 << endl;
        cout << student[i].name << endl;
        cout << student[i].age << endl;
        cout << student[i].GPA << endl;
    }

    return 0;
}
