#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main(){
    struct rectangle r1={10,24};
    cout<<sizeof(r1)<<endl;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    

    return 0;
}