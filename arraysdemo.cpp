/*
#include<iostream>

using namespace std;

int main(){
    int A[5];
    int B[5]={1,2,3,4,5};
    int C[10]={4,5,6,7};
    int D[5]={0};
    int E[]={3,4,5,6,7,8};
    for (int i = 0; i < 5; i++)
    {
        cout<<&A[i]<<endl;
    }
    

    return 0;
}
*/
// STatic VS Dynamic Memory:-
/*
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int A[6]={5,6,7,8,8,5};
    int *p;
    p=new A[5];
    p[0]=12;
    p[1]=23;
    p[2]=222;
    p[3]=22;
    p[4]=124;
    for (int i = 0; i < 6; i++)
    {
        cout<<A[i];
    }
    for (int i = 0; i < 5; i++)
    {
       cout<<p[i];
    }
    

    return 0;
}
*/
//How to Increase The size of Array
/*
#include<iostream>
using namespace std;

int main(){
    int *p,*q;
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]=9;
    p[3]=12;
    p[4]=13;

    q=(int *)malloc(10*sizeof(int));

    for(int i=0;i<5;i++)
        q[i]=p[i];

    for(int i=0;i<5;i++)
       cout<<q[i]<<endl;
    free(p);
    p=q;
    q=NULL;
    for(int i=0;i<5;i++)
        cout<<p[i]<<endl;
    return 0;
}
*/
// 2D array
/*
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int i,j;

    //method 1
    int A[3][4]={{1,2,3,4},{2,3,4,5},{2,3,4,5,}};
    //method 2
    int *B[3];
    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));
    //method 3

    int **c;
    c=(int**)malloc(3*sizeof(int*));
    c[0]=(int*)malloc(4*sizeof(int*));
    c[1]=(int*)malloc(4*sizeof(int*));
    c[2]=(int*)malloc(4*sizeof(int*));
    

    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            cout<<A[i][j];
            cout<<endl;
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++)
            cout<<B[i][j];
            cout<<endl;
    }
    return 0;
}
*/

