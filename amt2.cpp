#include<iostream>
using namespace std;

class Add_Amount{
    int Amount;
public:
    Add_Amount()
    {
    cout<<"No amount will be added to the piggie bank"<<endl;
    cin>>50;
    }
    Add_Amount(int a)
    {
    cout<<"Amount will be added to the piggie bank "<<endl;
    cin>>(a+50) ;

    }
   };


int main(){
    Add_Amount obj;
    Add_Amount obj(15);
return 0;
}
