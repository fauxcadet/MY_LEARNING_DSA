#include<iostream>
#include<stdio.h>
using namespace std;

class rectangle{
private:
        int length;
        int breadth;
public:
        rectangle()
        {
            length=0;
            breadth=0;

        }
        rectangle(int l ,int b){
            length=l;
            breadth=b;

        }
        int area(){
            return length*breadth;

        }
        int perimeter(){
            return 2*(length*breadth);
        }
        void setlength(int l){
            length = l;
        }
        void setbreadth(int b){
            breadth = b;
        }
        int getlength(){
            return length;
        
        }
        int getbreadth(){
            return breadth;
        
        }
        ~rectangle(){
            cout<<"destructor is called ";
        }
        
       
};
int main(){
    rectangle r(10,5);
    cout<<"area "<<r.area()<<endl;
    cout<<"perimeter " <<r.perimeter()<<endl;
    return 0;
}