#include<iostream>
using namespace std;

class Area
{
public:
  void area(int l)
  {

  cout<<"area of square"<<l*l<<endl;
  }
   void area(int l ,int b)
   {

   cout<<"area of rectangle "<<l*b<< endl;
   }
};

int main()
{
Area obj;
obj.area(1);
obj.area(2,3);

return 0;
}
