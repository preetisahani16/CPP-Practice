#include<iostream>
using namespace std;

class Parent{
    public:
        void display()
        {
        cout<<"Display of parent class"<<endl;
        }
         virtual void show()
        {
        cout<<"Show of parent class"<<endl;
        }
};
class child:public Parent{
    public:
        void show()
        {
        cout<<"Show of child class"<<endl;
        }

};

int main(){
child obj;
obj.show();

Parent *ptr;
ptr=&obj;


ptr->show();


return 0;
}
