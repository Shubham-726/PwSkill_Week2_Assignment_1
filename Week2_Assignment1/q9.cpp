#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter character";
    cin >> ch;
    if ((ch > 97 && ch < 122) || (ch > 64 && ch < 91))
    {
        cout << "it is character";
    }
    else if (((ch >= 32) && (ch <= 47)) || ((ch >= 58) && (ch <= 64)) || (ch >= 123 && ch <= 126))
    {
        cout << "Special Character";
    }
    else
        cout << "Invalid Character";
}