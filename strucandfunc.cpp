#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle{
    int length ;
    int breadth;

};
int area(struct rectangle r){
    return r.length*r.breadth;
}

int perimeter( rectangle r){
    int p;
    p= 2*((r.length)*(r.breadth));
    return p;
}

int main(){
    rectangle r= {0,0};
    cout<<"Enter length and breadth"<<endl;
    cin>>r.length>>r.breadth;

    int a= area(r);
    int peri= perimeter(r);
    cout<<a<<endl<<peri<<endl;
    
    return 0;
}