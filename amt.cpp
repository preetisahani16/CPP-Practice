#include <iostream>
using namespace std;

class AddAmount
{
    int amount;
public:
    AddAmount()
    {
        amount = 50;
    }

    AddAmount(int a)
    {
        amount = 50;
        amount = a+amount;
    }

    void amount_1()
    {
        cout << amount << endl;
    }
};

int main()
{
    AddAmount a1;
    AddAmount_1();
    a2.amount_1();
    return 0;
}
