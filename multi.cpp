#include<iostream>
using namespace std;

class Vehicle{
    public:

        Vehicle(){

        cout<<"This is a Vehicle"<<endl;
        }

};
class FourWheeler{
    public:
        FourWheeler(){
        cout<<"This is Four Wheeler"<<endl;
        }
};

class Car:public Vehicle,public FourWheeler{
};

int main(){
Car obj;
FourWheeler obj1;
return 0;
}
