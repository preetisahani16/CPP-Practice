#include<iostream>
using namespace std;

class Parent{
public:
    Parent(){
    cout<<"This is a parent class"<<endl;}
};
class Child{
public:
    Child(){
    cout<<"This is a Child class"<<endl;
    }

};
class SubChild:public Parent,public Child{

};
