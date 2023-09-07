#include <iostream>
using namespace std;

int main()
{

    int arr[4];
    int smallVal;

    for (int i = 0; i <= 3; i++)
    {
        cout << "Enter values: "<<endl;
        cin >> arr[i];
    }
    cout << "Value stored in array:\n";
    for (int i = 0; i <= 3; i++)
    {
        cout << arr[i] << endl;
    }

    for (int i = 0; i <= 3; i++)
    {

        if (arr[0] >= arr[i])
        {

            arr[0] = arr[i];
        }
        smallVal = arr[0];
    }

    cout << "The smallest value is:" << smallVal << endl;

    return 0;
}
