#include<iostream>
using namespace std;

class Vehicle{
public:
    Vehicle(){
    cout<<"This is a Vehicle"<<endl;
    }
};
class Car:public Vehicle{

public:
    Car(){
        cout<<"This is Car is vehicle"<<endl;
    }

};
class Bus:public Vehicle{
public:
    Bus(){
    cout<<"This is a Bus is a vehicle"<<endl;
    }
};
int main(){
Car obj;
Bus obj1;
Vehicle obj2;
return 0;
}
