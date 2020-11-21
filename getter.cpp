#include<iostream>
using namespace std;

class Student{
    int roll_no;
    int sub1,sub2,sub3;

    public:

    void setRollNo(int roll_no)
    {
    this->roll_no=roll_no;
    }

    void setSub1(int mark)
    {
    sub1=mark;

    }
    void setSub2(int mark)
    {
    sub2=mark;

    }
    void setSub3(int mark)
    {
        sub3=mark;
    }

    int getRollNo()
    {
     return roll_no;
    }

    int getSub1()
    {
    return sub1;
    }
    int getsub2()
    {
        return sub2;

    }
    int getsub3()
    {
        return sub3;
    }

};


int main(){
Student s1 ;
s1.setRollNo(134);
s1.setSub1(45);
s1.setSub2(46);
s1.setSub3(78);

cout<<"Roll no="<<s1.getRollNo()<<endl;
cout<<"Average="<<(s1.getSub1()+s1.getsub2()+s1.getsub3())/3    <<endl;
return 0;
}
