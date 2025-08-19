#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
class stack
{
private:
    Node* top;
public:
    stack(){
        top = NULL;
    }
    bool isEmpty(){
        return top == NULL;
    }
    void push(int val){
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
    }
    void peek(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
        }
        cout<<top->data<<endl;
    }
    void display(){
        if(isEmpty()){
            cout<<"Stack is Empyt"<<endl;
        }
        Node* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};


int main (){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.pop();
    st.peek();
    st.display();

    return 0;
}