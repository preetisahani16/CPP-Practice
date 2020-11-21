#include<iostream>
using namespace std;

class Account
{
 protected:

 string name;
 string account_no;
 string type;
 double balance;
 static int constant;

 public:
        Account(string name){
        this->name=name;
        this->balance=0;
        this->account_no="2012"+to_string(constant);
        }
        void deposit(double balance)
        {
            this->balance +=balance;

        }
        double withdraw()
        {
            if(balance>500)
            {
                 balance =balance-500;
                    return 500;
            }
            else
            {
                cout<<"Insufficient money"<<endl;
                return 0;
            }
        }
        void display(){
        cout<<"account_no"<<account_no<<endl;
        cout<<"name"<<name<<endl;
        cout<<"balance"<<balance<<endl;
        }


};
class Saving:public Account{

public:
    Saving(string type,string name ):Account(name) {
        this->type = type;
    }

    void getType(){
        cout<<"Account type ="<<type<<endl;
    }


};


int Account::constant=1;
int main(){
Saving obj("Saving Account","Preeti");
obj.deposit(1000);
obj.withdraw();
obj.display();
obj.getType();
return 0;
}
