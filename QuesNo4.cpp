#include <iostream>
using namespace std;

\\Switch-case-statement in c++.

int main()
{

    int marks;

    cout << "Enter your marks: " << endl;
    cin >> marks;

    switch (marks)
    {
    case 70:
        cout << "Your marks are 22" << endl;

        break;

    case 90:
        cout << "Your marks are 90" << endl;

        break;

    case 55:
        cout << "Your marks are 55" << endl;
        break;

    default:

        if (marks >= 50)
        {
            cout << "Congraculatios you passed the exam"
                 << "." << endl;
        }

        else if (marks < 50)
        {
            cout << "You failed." << endl;
                
        }

        cout << "Regards alpine college kpr."<<endl;
            

        break;
    }

    return 0;
}
