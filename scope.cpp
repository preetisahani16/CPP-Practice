#include<iostream>
using namespace std;

int m = 20;


int main(){
    int k = 10;
    int m = k;

    cout<<m<<endl;
    cout<<::m<<endl;

    m = 30;

    cout<<m<<endl;
    cout<<::m<<endl;

    return 0;
}
