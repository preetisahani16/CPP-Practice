#include<iostream>
using namespace std;

class Demo{
    int a;
public:
    Demo(int data){
    a=data;
    }

    void operator-(){
        a=a*5;

    }
        void show(){
            cout<<"A="<<a<<endl;
        }
};





int main(){
    Demo obj(10);
    -obj;
    obj.show();

return 0;
}
