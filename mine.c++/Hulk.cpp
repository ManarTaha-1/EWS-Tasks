#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    int count1=0;
    int count2=0;
    cin>>s;
    for (char c : s){
        if (c =='+'){
            count1++;
        }
        else if (c =='-'){
            count2++;
        }
    }
    if (count1%2==0 && count2%2==0){
        cout<<"Yes";
    }
   
    else if (count2%2==0 && count2%1!=0){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}
