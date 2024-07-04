#include<iostream>
using namespace std;
void fun(int A[ ],int n ){
  for(int i=0;i<n; i++)
  cout<<A[i]<<endl;
}

int main(){
    int A[ ]={2,3,4,5,7};
    int n=5;
    fun(A,n);

   
    return 0;
}