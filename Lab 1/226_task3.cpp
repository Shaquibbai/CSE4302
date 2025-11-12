#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double deg;
    double rad;
    cout<<"Enter value in degrees:";
    cin>>deg;
    rad = (deg)*(3.141593/180);
    cout<<"Value in radians:"<<setprecision(8)<<rad;
}
