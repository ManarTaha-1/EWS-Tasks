#include <iostream>
#include <string>
using namespace std; 
int main (){
  int num  ; 
  cout<<"Enter the number please "<<endl ; 
  cin>>num; 
 
 if (num==2){
    cout<<"The number is prime and even "<<endl; 
  }
 else if (num==3){
    cout<<"The number is prime and odd "<<endl; 
  }
  else if (num==5){
    cout<<"The number is prime and odd "<<endl; 
  }
  else if (num==7){
    cout<<"The number is prime and odd "<<endl; 
  }
 else  if (num==11){
    cout<<"The number is prime and odd "<<endl; 
  }
  else if ( num%2==0)
  {
    cout<<"The number is even"<<endl;
  }       
   else if ( num%2!=0&&num%3!=0&&num%5!=0&&num%7!=0&&num%9!=0&&num%11!=0)
  {
    cout<<"The number is prime and odd"<<endl;
  }  
  else 
  {
    cout<<"The number is odd"<<endl;
  } 
  

    return 0 ;
}