#include<iostream>
using namespace std;

class Database{
public:

    virtual void create(){
        cout<<"create"<<endl;
    }
     virtual void read(){
         cout<<"read"<<endl;
    }
    virtual void del(){
        cout<<"delete"<<endl;
    }
     virtual void update(){
       cout<<"update"<<endl;

}
};
class Oracle:public Database{
public:
    void create(){
        cout<<"child create"<<endl;
    }
    void read(){
        cout<<"child read"<<endl;
    }
    void del(){
        cout<<"child delete"<<endl;
    }
    void update(){
    cout<<"child update"<<endl;
    }



};
int main(){
    Database *obj;
    Oracle obj1;
    obj =&obj1;
    obj->create();
    obj->read();
    return 0;

}
