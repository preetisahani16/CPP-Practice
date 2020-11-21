
#include<iostream>
using namespace std;

class A{
    int x;
        public:
            A(int x){
                cout<<"A's constructor is called"<<endl;

            }
};

class B:public A{
    int y,z;
        public:
            B(int y,int z):A(y){
                cout<<"B's constructor is called"<<endl;

            }


};
class C:public B{
    public:
        C(int x,int y, int z):B(y,z){
        cout<<"C's constructor is called"<<endl;
        }

};
int main(){
    C obj(1,2,3);


return 0;
}
