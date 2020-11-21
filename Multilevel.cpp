#include<iostream>
using namespace std;

class Vehicle{
    public:
    Vehicle(){
    cout<<"This is Vehicle"<<endl;
    }
};

class FourWheeler:public Vehicle{
    public:
    FourWheeler(){
    cout<<"This is a four wheeler car is a Vehicle"<<endl;
    }
};

class Car:public FourWheeler{
    public:
    Car(){
    cout<<"Car has 4 wheels"<<endl;
    }

};
int main(){
Car obj;
FourWheeler obj1;
return 0;
}
