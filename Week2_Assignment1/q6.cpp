#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    float marks1, marks2, marks3;
    cout << "enter marks1 : ";
    cin >> marks1;

    cout << "enter marks2: ";
    cin >> marks2;

    cout << "enter marks3 : ";
    cin >> marks3;

    if (marks1 < marks2)
    {
        if (marks1 < marks3)
        {
            cout << "a has scored least marks";
        }
        else
            cout << "c has scored lest";
    }
    else

        if (marks2 < marks3)
        cout << "b has scored least marks";
    else
        cout << "c has scored least marks";
}