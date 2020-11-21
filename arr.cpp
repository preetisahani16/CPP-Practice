#include<iostream>
using namespace std;

class member{
     string name;
     int age;
     int phn_no;
     int address;
     int salary;

     public:
     void print_salary()
     {
     cout<<"salary of members"<<endl;
     cin>>salary;
     }
     void input()
     {
     cout<<" Enter the name"<<endl;
     cin>>name;
     cout<<" Enter the age"<<endl;
     cin>>age;
     cout<<"Enter the phn_no"<<endl;
     cin>>phn_no;
     cout<<"Enter the address"<<endl;
     cin>>address;

     }

       void output(){
       cout<<"name="<<name<<endl;
       cout<<"age="<<age<<endl;
       cout<<"phn_no="<<phn_no<<endl;
       cout<<"address="<<address<<endl;
       }

     };

     class manager: public member
     {
     string specialisation;
     string department;

    public:

    manager(string specializsation,string department)
    {
    this->department =department;
    this->specialisation =specialisation;

    }
    void show(){
    cout<<"Department="<<department<<endl;
    cout<<"specialisation="<<specialisation<<endl;
    }
    };






int main(){
member obj;
manager obj1("Human Resource","Accounting");
obj.input();
obj.output();
obj.print_salary();
obj1.show();
return 0;

}
