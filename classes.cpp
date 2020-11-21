#include<iostream>
using namespace std;

class Student{
    public:
        int studentID;
        string name;
        string address;


};


int main(){
    Student obj,obj1;

    obj.studentID = 101;
    obj.name = "RAM";
    obj.address = "Rohini";

    cout<<"Student ID = "<<obj.studentID<<endl;
    cout<<"Student Name = "<<obj.name<<endl;
    cout<<"Student Address = "<<obj.address<<endl;

    cout<<"Enter the StudentID"<<endl;
    cin>>obj1.studentID;
    cout<<"Enter the Student Name"<<endl;
    cin>>obj1.name;
    cout<<"Enter the Student Address"<<endl;
    cin>>obj1.address;


    cout<<"Student ID = "<<obj1.studentID<<endl;
    cout<<"Student Name = "<<obj1.name<<endl;
    cout<<"Student Address = "<<obj1.address<<endl;

    return 0;
}
