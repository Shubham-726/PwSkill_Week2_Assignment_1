#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"enter the value of y";
    cin>>y;
    if(x==0){
        cout<<"the point lies on y Axis";
    }
    else if(y==0){
        cout<<"the point lies on x Axis";
    }
    else if(x==0&&y==0){
        cout<<"the point lies on origin";
    }
    else
    cout<<"invalid";
}