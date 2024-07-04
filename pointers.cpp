 #include<iostream>
 #include<stdio.h>
 using namespace std;
 struct rectangle
 {
    int lenght;
    int breadth;
 };
 
 
 int main(){
    
int *p1;
char *p2;
float *p3;
double *p4;
struct rectangle *p5;
cout<<sizeof(p1) <<endl;
cout<<sizeof(p2) <<endl;
cout<<sizeof(p3) <<endl;
cout<<sizeof(p4) <<endl;
cout<<sizeof(p5) <<endl;
  /*
   int a = 10;
    int *p;
    p=&a;
    cout<<p<<endl;
    cout<<*p<<endl;
  */

/*
int *p;
p= new int[5];
//p=(int *)malloc(5*sizeof(int));
p[0]=10; p[1]=12; p[3]= 23; p[4]= 34;
for (int i = 0; i < 5; i++)
{
    cout<<p[i]<<endl;
}*/

    return 0;
 }