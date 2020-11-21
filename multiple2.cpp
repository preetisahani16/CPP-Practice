#include<iostream>
using namespace std;

class A{
    public:
        int a;

    A(int x){
    cout<<"A's constructor is called"<<endl;
    a=x;
    }
};
class B{
public:
    int b;

    B(int y){
    cout<<"B's constructor is called"<<endl;
    b=y;
    }
};
class C:public B,public A{
    int c;
public:
    C(int x,int y,int z):B(z),A(y){
    cout<<"C's constructor is called"<<endl;
    c=x;
    }
};

int main(){
    C obj(1,2,3);
    //
    B obj1;
    //A obj2;

return 0;
}

