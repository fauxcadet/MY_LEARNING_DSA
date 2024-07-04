#include<iostream>
using namespace std;
template<class T>
class arithmetic{
    private:
        T a;
        T b;
    public:
     arithmetic(T a ,T b);
     T add();
     T sub();
};
        template<class T>
        arithmetic<T>::  arithmetic(T a ,T b){
            this->a=a;
            this->b=b;
        }

         template<class T>
          T arithmetic <T>::add(){
            T c;
            c=a+b;
            return c;

        }
         template<class T>
         T arithmetic<T>:: sub(){
            T c;
            c=a-b;
            return c;
        }

int main(){
    arithmetic<float>  ar(10,5);
    cout<<"add "<<ar.add()<<endl;
    cout<<"sub "<<ar.sub()<<endl;


    return 0;
}