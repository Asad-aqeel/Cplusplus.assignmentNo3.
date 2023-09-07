#include <iostream>
using namespace std;

// Top down structure programing.
// Break your program into pieces and perform certain actions from those pieces.
// Do once use forever.

int product(int a, int b)
{

    int d = a * b;
}

int main()
{

    int num1, num2;
    cout << "Enter num1 value: ";
    cin >> num1;

    cout << "Enter num2 value:";
    cin >> num2;

    cout << "The product of num1 and num2 is " << product(num1, num2);

    return 0;
}
