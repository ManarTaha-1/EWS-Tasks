#include <iostream>
using namespace std;
int main()
{
    char ch;
    int count1 = 0;
    int count2 = 0;
    for (size_t i = 0; i < sizeof(ch); i++){
    cin >> ch;
    if (ch == '(')
    {
        count1++;
    }
    else if (ch == ')'){
        count2++;
    }
    }
    if (count1 == count2){
        cout<<count1;
    }
    else if(count2 >count1){
        cout<<count1;
    }
    else {
        cout<<count2;
    }
    return 0;
}