#include<iostream>
using namespace std;

class Customer{
    int id;
    string name;
public:
        Customer(int id,string name){
        this->id = id;
        this->name = name;
        }
        void show(){
        cout<<"Id="<<id<<endl;
        cout<<"Name="<<name<<endl;
        }
};

