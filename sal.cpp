#include<iostream>
using namespace std;

class Employee{

     int salary;
     int no_of_hrs;

     public:

     void getInfo()
     {
     cout<<"takes the salary and no.of hrs of work"<<endl;

     cin>>salary>>no_of_hrs;

     }

     void AddSal()
     {
         if(salary<500){
     cout<<"Adds 10 to the salary if less than $500"<<endl;

     salary=10+salary;}

    }
    void AddWork()
    {
        if(no_of_hrs>6){
    cout<<"adds 5 to the salary"<<endl;
    salary+=5;
    }

    }


    void print_salary()
    {
    cout<<"Final salary"<<salary<<endl;
    }
};
int main()
{
    Employee obj;obj.getInfo();
obj.AddSal();
obj.AddWork();obj.print_salary();

return 0;
}
