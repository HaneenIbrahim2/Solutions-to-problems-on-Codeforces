#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n , a, b ;
    cin>>n>>a>>b;
    if(a+b<n){
        cout<<"no";

    }else if(a+b>=n){
        if(a>=n&&b>=(n/2)){
            cout<<"yes";
        }else if(b>=n &&a>=(n/2)){
            cout<<"yes";
        }else if(a==n &&b==n){
            cout<<"yes";

        }else if (a>n&&b>n){
            cout<<"yes";
        } else if(a<n &&b<n ){
            if((a==b)||(a>=(n/2)&&b>=(a-1))||(b>=(n/2)&&a>=b-1)){
                cout<<"yes";
            }else
                cout<<"no";
        }else
            cout<<"no";
    }
}