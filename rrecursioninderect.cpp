/*#include<iostream>
using namespace std;
void funb(int n);
void funa(int n){
    if(n>0){
        cout<<n;
        funb(n-1);

    }
}
void funb(int n ){
    if(n>1){
        cout<< n;
        funa(n/2);
    }
}

int main(){
    
    return 0;
}*/
#include<iostream>
int fun(int n){
    if(n>100)

     return (n-10);
    
    return fun(fun(n+11));




}
using namespace std;

int main(){
    int r;
    r=fun(99);
    cout<<r;

    
    return 0;
}
