#include<iostream>
#include<conio.h>
 using namespace std;
 float area (int);
 int area(int,int);
 int main()
 {
 int r;
 cout<<"Enter radius of the circle";
 cin>>r;
 cout<<"Area of circle is "<<area(r);
 getch();
 int l,b;
cout<<endl<<"Enter length and breadth of  a rectangle";
cin>>l>>b;
cout<<"Area of the rectangle is"<<area(l,b);
getch();
 }

int area(int L,int B)
{


return(L*B);
}
 float area( int R)
 {

return(3.14*R*R);

 }
