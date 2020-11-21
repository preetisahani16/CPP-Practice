#include<iostream>
using namespace std;

void print(){
    cout<<"Last Print"<<endl;
}

template<typename T, typename... T1>
void print(T x, T1... y){
    cout<<x<<endl;

    print(y...);
}

int main(){

    print(12,34.56,true,'$',"Hello World");

    return 0;
}
