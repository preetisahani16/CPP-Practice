#include<iostream>
using namespace std;

class Account{
protected:

    int id;
    string name;
    int age;

public:

    Account(int id,string name,int age){
    cout<<"Account constructor is called"<<endl;
    }
};


class Saving: public Account{
    int id;
    string name;
    int age;
    string type;
public:
    Saving(int id,string name, int age,string type):Account(id,name,age){

    this-> id=id;
    this-> name=name;
    this-> age=age;
    this-> type=type;
    }
};

int main(){

    Saving obj(101,"Preeti",11,"current");


return 0;
}
