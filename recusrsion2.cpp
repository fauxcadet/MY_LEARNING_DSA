//sum of first n natural number
/*
#include<iostream>
using namespace std;

int sum(int n){
    if(n==0)
       return 0;
    return sum(n-1)+n;
}

int main(){
    int r;
    r=sum(6);
    cout<<r;
    
    return 0;
}

*/





// factorial of a number
/*
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int main(){
    int r;
    r=fact(4)    ;
    cout<<r;
    return 0;
}
*/



//power exponent
/*

 #include<iostream>
 using namespace std;
 int power(int m, int n){
    if(n==0)
        return 1;
    return power(m,n-1)*m;    
 }

 
 int main(){
    int r=power(2,9);
    cout<<r;
    
    return 0;
 }
*/

//taylor series

/*
#include<iostream>
using namespace std;

double e(int x, int n){
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+(p/f);
}

int main(){
    cout<<e(4,10);
    return 0;
}
*/

//taylor series using horner rule
/*
#include<iostream>
using namespace std;

double e(int x, int n){
    static double s;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e(x,n-1);
}
int main(){

    cout<<e(1,10)<<endl;
    cout<<e(2,10)<<endl;
    cout<<e(3,10)<<endl;
    
    return 0;
}
*/
//taylor series using horner rule usig iterative method
/*
#include<iostream>

using namespace std;
double e(int x,int n){
    double s=1;
    int i;
    double num=1;
    double den=1;

    for(i=1;i<=n;i++){
        num*=x;
        den*=i;
        s+=num/den;
    }
}

int main(){
    cout<<e(1,10);
    return 0;
}
*/

//fibonacci series
/*


#include<iostream>
using namespace std;

int fib(int n){
    
    int t0=0,t1=1,s=0,i;
    if(n<=1) 
        return n;
    for(i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;

    }
    
    return s;
}

int rfib(int n){
    if(n<=1) return n;
    return rfib(n-2)+rfib(n-1);
}
int F[10];
int mfib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    
    }
    else{

        if(F[n-2]==-1)
            F[n-2]=mfib(n-2);
        if(F[n-1]==-1)
            F[n-1]=mfib(n-1);
        return F[n-2]+F[n-1];      
        return F[n-2]+F[n-1];  
    }
    
}


int main(){
    int i;
    for(i=0;i<10;i++)
        F[i]=-1;
    cout<<mfib(10);
    return 0;
}


*/
//combination formula
/*

#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
        return 1;
     return fact(n-1)*n   ;
}

int ncr(int n, int r){
    int num,den;
    num = fact(n);
    den =fact(r)*fact(n-r);
    return num/den;
}

int NCR(int n, int r){
    if(n==r || r==0)
      return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);  
}
int main(){
    cout<<ncr(7,3)<<endl;
    cout<<NCR(7,3);
    return 0;
}
*/
// tower of hanoi

#include<iostream>
using namespace std;

void TOH(int n,int A,int B, int C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<A<<","<<C<<endl;
        TOH(n-1,B,A,C);

    }
}

int main(){
    TOH(4,1,2,3);
    

    return 0;
}