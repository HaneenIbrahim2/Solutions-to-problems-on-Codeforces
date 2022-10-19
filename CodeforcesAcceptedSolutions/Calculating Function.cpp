#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n ,out=0,count=0 ;
    cin>> n;
    long long x=n;
    if(n%2==0){
        cout<<n/2<<endl;
    }else if(n%2!=0) {
        x=x-1;
        x=x/2;
        out = x - n;
        cout << out;
    }



}