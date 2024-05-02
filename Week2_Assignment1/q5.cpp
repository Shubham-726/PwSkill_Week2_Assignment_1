#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout << "enter side 1 : ";
    cin >> side1;
    cout << "enter side 2 : ";
    cin >> side2;
    cout << "enter side 3 : ";
    cin >> side3;

    if (side1 == side2 == side3)
    {
        cout << "equilateral triangle";
    }

    else if ((side1 == side2) || (side2 == side3) || (side3 == side1))
    {
        cout << "isosceles triangle";
    }
    else
        cout << "scalene  triangle";
}