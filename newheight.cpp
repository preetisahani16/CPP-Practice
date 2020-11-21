#include<iostream>
using namespace std;

class Student{
   double height;
   public:
       void input(){
       cout<<"Enter the height of the students"<<endl;
       cin>>height;

       }
    double get_Height(){
    return height;
    }

};


    int main(){
    int num;
    cout<<"Enter the number of Students"<<endl;
    cin>>num;

    Student s[num];
    Student obj;

    for (int i=0;i<num;i++){

 obj.input();
 s[i]  =obj;
    }
int totalheight=0;
for(int i=0;i<num;i++){
totalheight+=s[i].get_Height();

}

cout<<"Average height="<<(totalheight/num)<<endl;
return 0;
}


