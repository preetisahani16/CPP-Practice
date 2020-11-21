#include<iostream>
using namespace std;

class Student{
int H1,H2,H3,H4;

public:
    void input(){
    cout<<"Enter height of the students"<<endl;
    cin>>H1>>H2>>H3>>H4;
}
    void output(){
    cout<<"Average="<<(H1+H2+H3+H4)/4<<endl;
}

};
int main(){
Student arr[4];
Student s1;

for(int i=0; i<4; i++){
s1.input();
arr[i]=s1;

}
for( int i=0;i<4; i++){
arr[i].output();

}

return 0;

}
