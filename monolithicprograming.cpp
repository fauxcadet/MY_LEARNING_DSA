#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int length=0,breadth=0;
    cout<<"Enter length and breadth"<<endl;
    cin>>length>>breadth;
    int area= length*breadth;
    int peri = 2*(length +breadth);
    cout<<area<<endl<<peri<<endl;
    
    return 0;
}