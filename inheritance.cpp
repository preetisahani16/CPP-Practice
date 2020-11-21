#include<iostream>
using namespace std;

class Marks{
protected:
    int roll_no;
    string name;
    int marks;

            };
class Physics:public Marks{
public:
int phy;
 Physics(int phy){
     this phy->phy;
    cout<<"Enter the Phy marks of the student"<< phy<<endl;
}
};

class Chemistry:public Marks{
public:
int chem;
Chemistry(int chem){
    this chem->chem;
cout<<"Enter the chem marks of the student"<< chem<<endl;
}

};




int main(){
Chemistry obj(75);
Physics obj1(56);
cout<<"Average marks="<<(phy.obj+Chemistry.obj(75)/2)<<endl;
return 0;
}
