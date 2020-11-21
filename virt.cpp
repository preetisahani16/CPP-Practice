#include<iostream>
using namespace std;

class Parent{
 public:
 void display(){
 cout<<"show of parent class"<<endl;

 }
 virtual void show()=0;
};
class Child:public Parent{
public:
    void show(){
cout<<"Show of child class"<<endl;
}
};
int main(){
Child
obj1;

obj1.display();



return 0;
}
