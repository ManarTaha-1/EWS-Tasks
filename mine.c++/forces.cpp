#include <iostream>
using namespace std;
int main()
{
    int n , m , k ;
    cin>>n>>m>>k;
    if (n==0){
        cout<<"0";
    }
    else if (n==1){
        if (m>0&&k>0){
            cout<<"1";
        }
        else cout<<"0";
    }
    else if (n==m&&k==m){
       cout<<n;
    }
    else if(m==0){
        if(n>=2&&k>=1){
            cout<<n/k;
        }
        else cout<<"0";
    }
    else if (n>m&&k>m&&n>k) {
        if (((n-m)/2)>(k-m)){
            cout<<k;
            
        }
        else if (((n-m)/2)<(k-m)){
            cout<<m+((n-m)/2);
        }
        else if (((n-m)/2)==(k-m)){
            cout<<m+k;
        }
    }
    else if (m>n&&k>n) {
        cout<<n;
    }
    else if ((m>n&&n>k)||(n>m&&m>k)) {
        cout<<k;
    }
    else if (k==0) {
        cout<<"0";
    }
    else if (n>m&&k>n){
        cout<<m+((n-m)/2);
    }
    
    return 0;
}
