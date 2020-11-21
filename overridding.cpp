#include<iostream>
using namespace std;

class BaseClass{
public:
    virtual void Display(){
    cout<<"This is ths Display method of BaseClass"<<endl;
    }
    void Show(){
    cout<<"This is show method of base class"<<endl;

    }
};

class DerivedClass:public BaseClass{
public:
    void Display(){
    cout<<"This is display of Derived class"<<endl;
    }

};

int main(){
    DerivedClass obj;
    BaseClass &bs=obj;
    obj.Show();
    bs.Display();



return 0;
}
