#include <iostream>
using namespace std;
int main(){
   int num = 200; 
   int *ptr = &num; 
   cout<<"value :"<<num<<endl;
   cout<<"address :"<<&num<<endl;
   cout<<"value :"<<*ptr<<endl;
   cout<<"address :"<<ptr<<endl;
   *ptr = 500; 
   cout<<"value :"<<num<<endl;
   cout<<"address :"<<&num<<endl;
   cout<<"value :"<<*ptr<<endl;
   cout<<"address :"<<ptr<<endl;

    return 0; 
}