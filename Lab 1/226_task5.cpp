#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter initial geese count: ";
    cin>>n;
    int fir;
    int sec;
    int thi;
    fir = (n+n*13)-((n*13)/2);
    cout<<"Geese count after year 1: "<<fir<<"\n";
    sec = (fir+fir*13)-((fir*13)/2);
    cout<<"Geese count after year 2: "<<sec<<"\n";
    thi = (sec+sec*13)-((sec*13)/2);
    cout<<"Geese count after year 3: "<<thi<<"\n";

}
