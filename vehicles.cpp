#include<iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle(){
        cout<<"This is vehicle"<<endl;
        }

};

class Car: public Vehicle{
    public:

        Car(){
        cout<<"This is car"<<endl;
        }

};




int main(){
Car obj;
Vehicle obj1;
return 0;
}
