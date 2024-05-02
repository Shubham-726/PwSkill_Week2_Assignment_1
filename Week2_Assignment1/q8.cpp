#include <iostream>
using namespace std;
int main()
{

    int x1, y1, x2, y2, x3, y3;

    cout << "enter coordinate of first point : ";
    cin >> x1 >> y1;

    cout << "enter coordinate of second point : ";
    cin >> x2 >> y2;

    cout << "enter coordinate of third point : ";
    cin >> x3 >> y3;

    float slope1 = (y2 - y1) / (x2 - x1);
    float slope2 = (y3 - y2) / (x3 - x2);

    if (slope1 == slope2)
    {
        cout << "point lies on same lies line";
    }

    else
    {
        cout << "point does not lies on same line";
    }
}