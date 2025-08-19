#include <iostream>
using namespace std;
int main()
{
    int size = 0, i;
    cin >> size;
    long long arr[size];
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];

    }
    for(i=0; i<size ; i++){
        if (arr[i] == arr[i+1])
        {
            arr[i]++;
            arr[i+1]++;
        
        }
        cout<<arr[i];
    }

    return 0;
}