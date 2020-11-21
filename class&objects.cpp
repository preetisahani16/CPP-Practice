#include<iostream>
using namespace std;

class Student{

private:
    int id;
    string address;
    string name;
    public:
    void input()
    {
    cout<<"Enter student id"<<endl;
    cin>>id;
if(id>0)
    {
    cout<<"student id is valid"<<endl;
    }
else
    {
    cout<<"student id is invalid"<<endl;
    return;
    }
    cout<<"Enter the student name"<<endl;
    cin>>name;
    cout<<"enter the student address"<<endl;
    cin>>address;

    }
void output()
    {
    cout<<"student id="<<id<<endl;
    cout<<"student name="<<name<<endl;
    cout<<"student address="<<address<<endl;
    }
    };
int main()
    {
    Student obj;
    obj.input();
    obj.output();
    return 0;
    }


