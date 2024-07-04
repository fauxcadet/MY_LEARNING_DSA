#include<iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};

int main(){
     /*
     rectangle r={10,4};
     cout<<r.length<<endl;
     cout<<r.breadth<<endl;

     rectangle *p=&r;
     cout<<p->length<<endl;
     cout<<p->breadth<<endl;
     */
    rectangle *p;
    p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p->breadth=11;
    p->length=13;
     cout<<p->length<<endl;
     cout<<p->breadth<<endl;

    return 0;
}