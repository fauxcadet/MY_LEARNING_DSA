#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
struct rectangle *fun(){
    struct rectangle *p;
    p=new rectabgle;
    p->length=15;
    p->breadth=7;

}
/*
void fun(struct rectangle *p){
    p->length=20;
    cout<<"length "<<p->length<<endl<<"breadth "<<p->breadth<<endl;
}

*/
int main(){
    struct rectangle *ptr=fun();
    cout<<"length "<<ptr->length<<endl<<"breadth "<<ptr->breadth<<endl;
   
   /*
   struct rectangle r={10,5};
    fun(&r);
    cout<<"lengthh "<<r.length<<endl<<"breadth "<<r.breadth<<endl;
   */
    return 0;
}