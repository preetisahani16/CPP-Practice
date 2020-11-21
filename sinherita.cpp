#include<iostream>
using namespace std;

//Parent Class
class A{
    int a;
    public:
        void show1(){
            cout<<"Show of Class A"<<endl;
        }
};

//Child Class
class B : public A{
    int b;
    public:
        void show2(){
            cout<<"Show of Class B"<<endl;
        }

};

int main(){
    B obj;
    obj.show1();
    obj.show2();



    return 0;
}
