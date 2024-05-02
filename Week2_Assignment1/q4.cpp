#include<iostream>
using namespace std;
int main(){
    float length,breadth;
    cout<<"enter length of Rectangle";
    cin>>length;
    cout<<"enter breadth of reactangle";
    cin>>breadth;
    int Area = length*breadth;
    int Perimeter = (length+breadth)*2; 
    if(Area>Perimeter){
        cout<<"area is greater than Perimeter";
    }
    else
    cout<<"Perimeter is greater than Area";
}