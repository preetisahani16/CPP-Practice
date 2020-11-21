#include<iostream>
using namespace std;

class Sample{
    int a,b;
public:
    Sample(int a, int b)
   {
    this-> a = a;
    this-> b = b;
   }
   Sample(Sample &old){
   a= old.a;
   b= old.b;

   }
   void print(){
   cout<<"a="<<a<<endl;
   cout<<"b="<<b<<endl;
   }


};
int main(){
    Sample S1(10,20);
    Sample S2(S1);
    S1.print();
    S2.print();

return 0;
}
