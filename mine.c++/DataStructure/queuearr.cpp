#include <iostream>
using namespace std;
#define MAX 100
class queue{
private:
    int front;
    int back;
    int arr[MAX];
    int size;
public: 
    queue(){
        front=0;
        back=0;
        size=0;
    }
    bool isEmpty(){
        return size==0;
    }
    bool isFull(){
        return size==MAX;
    }
    void enqueue(int val){
        if(isFull()){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        arr[back]=val;
        back=(back+1)%MAX;
        size++;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        front=(front+1)%MAX;
        size--;
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        for(int i=0;i<size;i++){
            cout<<arr[(front+i)%MAX]<<" ";
        }
        cout<<endl;
    }

};


int main (){


    return 0;
}