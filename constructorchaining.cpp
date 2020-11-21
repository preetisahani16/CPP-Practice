#include<iostream>
using namespace std;

class Bank{
protected:
    int x,y,z;
    public:
        Bank(int x){
            cout<<"this is the bank class"<<endl;
        }


};
class HDFC:public Bank{
    public:
        HDFC(int x,int y):Bank(x){
            cout<<"this is the HDFC class"<<endl;
        }
};
int main(){
    HDFC obj(1,2);



return 0;
}
