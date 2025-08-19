#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std; 
int convert (int  n){
    int i=0 ;
    int  decimal =0 ;
    int r =0; 
    while (n!=0)
    {
        r = n %10; 
         n /=10; 
        decimal += r *pow(2,i); 
        i++;
    }
    return decimal; 
    
}
int main (){
    int num;
    cout<<"Enter the number please"<<endl;
    cin>>num;
    cout<<"The decimal number is "<<convert(num)<<endl;

    return 0 ;
}