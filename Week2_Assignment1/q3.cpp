#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter year:";
    cin >> year;
    if (year % 4 == 0)
    {
        if ((year % 100 != 0) || ((year % 100 == 0) && (year % 400 == 0)))
        {
            cout << "Leap Year";
        }
        else
            cout << "Not a Leap Year";
    }
    else
        cout << "Not a Leap Year";
}