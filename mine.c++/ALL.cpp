#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <stdlib.h>
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
   string weekday(int d, int m, int y) {
    int LeapYears = y / 4;
    long a = (y - LeapYears) * 365 + LeapYears * 366;
    if (m >= 2) a += 31;
    if (m >= 3 && (y % 4 == 0)) a += 29;
    else if (m >= 3) a += 28;
    if (m >= 4) a += 31;
    if (m >= 5) a += 30;
    if (m >= 6) a += 31;
    if (m >= 7) a += 30;
    if (m >= 8) a += 31;
    if (m >= 9) a += 31;
    if (m >= 10) a += 30;
    if (m >= 11) a += 31;
    if (m == 12) a += 30;
    a += d;
    int b = (a - 2) % 7;
    switch (b) {
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        case 0: return "Sunday";
    }
    return "";
}


int main (){
    int click;
    cout<<"HELLO,"<<endl<<"If you want to convert binary number to decimal number click 1"<<endl
    <<"If you want to know the number is odd or even or prime click 2"<<endl
    <<"If you want to know Multiplication table of any number click 3"<<endl
    <<"If you want to know what the day of any date click 4"<<endl;
    cin>> click ;
    switch (click)
    {
    case (1):
        int n1;
    cout<<"Enter the number please"<<endl;
    cin>>n1;
    cout<<"The decimal number is "<<convert(n1)<<endl;
    break;  
    case (2):
    int n2  ; 
   cout<<"Enter the number please "<<endl ; 
   cin>>n2; 
 
     if (n2==2){
      cout<<"The number is prime and even "<<endl; 
     }
    else if (n2==3){
      cout<<"The number is prime and odd "<<endl; 
     }
     else if (n2==5){
      cout<<"The number is prime and odd "<<endl; 
     }
     else if (n2==7){
       cout<<"The number is prime and odd "<<endl; 
     }
    else  if (n2==11){
       cout<<"The number is prime and odd "<<endl; 
     }
    else if ( n2%2==0)
     {
       cout<<"The number is even"<<endl;
     }       
    else if ( n2%2!=0&&n2%3!=0&&n2%5!=0&&n2%7!=0&&n2%9!=0&&n2%11!=0)
     {
       cout<<"The number is prime and odd"<<endl;
     }  
    else 
     {
      cout<<"The number is odd"<<endl;
     } 
  
        break;
     case (3):
     int n3 ; 
     cout <<"Enter the number please"<<endl;
     cin>>n3;
     switch (n3)
     {
       case(1):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
      case(2):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
      case(3):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
      case(4):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
      case(5):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
      case(6):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
      case(7):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
      case(8):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
      case(9):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
      case(10):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
      case(11):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
      case(12):
       for(int i = 0; i<=12 ; i++){
        cout<<n3<<" * "<<i<<" = "<<n3*i<<endl;
       }
        break;
    }

    break;
    case (4):
    int d, m, y;
    cout<<"Enter  day please "<<endl;
    cin >> d ;
    cout<<"Enter month please "<<endl;
    cin >> m ;
    cout<<"Enter year please "<<endl;
    cin>> y;
    cout << weekday(d, m, y) << endl;
    break;
    }
    system("pause");
 

    return 0; 
}