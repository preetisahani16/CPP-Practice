
#include<iostream>
using namespace std;

class Vehicle{
public:
    Vehicle(){
        cout<<"This is a vehicle

        "<<endl;
    }
};
class Fare{
public:
    Fare(){
        cout<<"Fare of vehicle"<<endl;
    }

};
class Car : public Vehicle{
public:
    Car(){
        cout<<"This car is Vehicle"<<endl;
    }
};
class Bus :public Fare{
public:
    Bus(){
        cout<<"This Bus has fare"<<endl;
    }
};
int main(){
    Car obj;
    Bus obj1;

return 0;
}

