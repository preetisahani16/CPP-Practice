#include<iostream>
using namespace std;

template<typename T>
void add(T x, T y){
    cout<<"sum = "<<x+y<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
}

template<typename T1, typename T2=char> //default argument in template.
void add(T1 x, T2 y){
    cout<<"sum = "<<x+y<<endl;
}


int main(){
    // add(2,3);
    // add(2.34,2.34);


    // add<int>(2,3);
    // add<double>(2.45,5);

    // add<int,char>(2,'#'); //37

    add<int>(2,'#');

    return 0;
}
