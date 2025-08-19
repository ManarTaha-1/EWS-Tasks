#include <iostream>
using namespace std;
#define MAX 100
class stack
{
private:
    int top;
    int arr[MAX];
public:
    stack(){
        top=-1
    }
bool isEmpty(){
    return top==-1;
}
bool isFull(){
    return top==MAX-1;
}
void push(int val){
    if(isFull()){
        cout<<"stack Overflow"<<endl;
    }
    top++;
    arr[top]=val;
}
void pop(){
    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    top--;
}
void peek(){
    if(isEmpty()){
        cout<<"Stack is Empyt"<<endl;
    }
    cout<<arr[top]<<endl;
}
};


int main (){


    return 0;
}