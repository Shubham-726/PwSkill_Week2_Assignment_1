#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter first num";
    cin >> a;
    cout << "enter second num";
    cin >> b;
    if (a > b)
    {
        cout << "first num" <<" "<< a <<" " << "is greatest";
    }
    else
        cout << "second num" <<" "<< b<<" " << "is greatest";
}