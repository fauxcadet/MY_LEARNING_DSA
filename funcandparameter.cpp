#include<iostream>
using namespace std;
 
 /*
 
 int add(int a, int b){
    int c;
    c=a+b;
    return(c);
  }
 */
void swap(int *x, int *y){
 int temp;
 temp = *x;
 *x=*y;
 *y=temp;
}

int main(){
    int num1=10,num2=11;
    swap(&num1,&num2);
    cout<<num1<<endl;
    cout<<num2<<endl;
    /*
    int num1=13;
    int num2=122;
    int sum;
    sum = add(num1,num2);
    cout<<sum<<endl;
    */
    return 0;
}