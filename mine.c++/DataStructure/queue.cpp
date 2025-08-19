#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
class queue
{
private:
    Node* front;
    Node* back;
    int size;
public:
    queue(){
        front = NULL;
        back = NULL;
        size = 0 ;
    }
    bool isEmpty(){
        return size==0;
    }
    void enqueue (int val){
        Node* newNode = new Node();
        newNode->data=val;
        newNode->next=NULL;
        if(isEmpty()){
            front=newNode;
            back=newNode;
        }
        back->next=newNode;
        back=newNode;
        size++;
    }
    void dequeue(int val){

        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
        }
        Node* = front;
        front=fornt->next;
        delete temp;
        size--;
        if(isEmpty()){
            back=NULL;
            size--;
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"queue is Empty"<<endl;
        }
        Node* temp=front;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};


int main (){


    return 0;
}