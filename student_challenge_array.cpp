#include<iostream>
#include<stdlib.h>
using namespace std;
struct Array {
    int A[10];
    int size;
    int length;
};

int main(){
    
    struct Array arr1= {{2,3,8,8,10,12,15,15,15,20},20,10};
    int lastduplicate=0;
    int n=10;
    for(int i=0;i<n;i++)
    {
        if(A [i]==A[i+1] &&A[i]!= lastduplicate);
            cout<<A[i]<<endl;
            lastduplicate=A[i];

    }
    return 0;
}