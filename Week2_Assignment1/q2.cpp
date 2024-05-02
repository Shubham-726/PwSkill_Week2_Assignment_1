#include<iostream>
using namespace std;
int main(){
    int radius;
    int pie = 3.14;
    cout<<"enter radius of circle: ";
    cin>>radius;
    int area = pie*radius*radius;
    int circumference = 2*pie*radius;

    if(area>circumference){
        cout<<"area is greater than circumference";
    }
    else
        cout<<"circumference is greater than area";

}