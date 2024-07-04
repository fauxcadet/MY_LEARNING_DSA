#include<iostream>
using namespace std;

int main(){
    int A[5];
    A[0]=12;
    A[1]=2;
    A[2]=1;
    cout<<sizeof(A);

for(int X:A){
    cout<<X<<endl;
}
    return 0;
}