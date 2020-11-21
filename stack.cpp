#include<iostream>
using namespace std;

template<class T>

class Node {

public:
        T data;
    Node *next;
    Node(T data)
    {

        this->data =data;
        this->next =NULL;
    }

    };
    template <class T1>
class Stack{
 Node<T1>*top;
 public:
     Stack(){
        top=NULL;
     }

     void push(T1 data)
     {

         Node<T1>*newNode=new Node<T1>(data);
         if (top==NULL)
         {

             top=newNode;

         }
         else{
            newNode->next =top;
            top =newNode;
         }
     }
     void pop(){
        if(top==NULL)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else{
            Node<T1>*temp = top;
            top =top->next;
            delete temp;
        }
     }
     void display(){
     Node<T1>*temp =top;
     while(temp!=NULL)
     {
        cout<<temp->data<<" ";
        temp = temp->next;
     }
     cout<<endl;
     }
     Node<T1>*getTop(){
     Node<T1>*temp = top;
     return temp;
     }
};





int main(){

Stack<int> obj;
obj.push(100);
obj.push(700);
obj.push(200);
obj.push(300);
obj.push(500);
obj.display();
obj.pop();
obj.pop();
obj.display();
cout<<obj.getTop()->data <<endl;

return 0;
}
