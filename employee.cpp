#include<iostream>
using namespace std;

class Employee{
     string name;
     int salary;
     int DOJ;

     public:
     void input(){
     cout<<"Enter the name of employee"<<endl;
     cin>>name;
     cout<<"Enter the salary of the Employee"<<endl;
     cin>>salary;
     cout<<"enter the date of joining"<<endl;
     cin>>DOJ;

    }
                 void output(){
                 cout<<"name="<<name<<endl;
                 cout<<"salary="<<salary<<endl;
                 cout<<"DOJ="<<DOJ<<endl;
                                }
                                };

int main(){
Employee arr[10];
Employee E1;
for(int i=0; i<10; i++){
E1.input();
arr[i]=E1;
}
for(int i=0; i<10; i++){
arr[i].output();
}
return 0;
}



