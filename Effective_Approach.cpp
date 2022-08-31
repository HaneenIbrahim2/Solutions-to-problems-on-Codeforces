#include<bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include <cerrno>
#include <climits>
using namespace std ;
int main() {
    long long  n , q , ele , vas=0 , par=0 ;
    int arr[100005],num;
    cin>>n;
    for(int i =1 ; i<=n ; i++){
        cin>>num;
        arr[num]=i; //this method to save index arr[3]=1 this mean element 3 is in index 1
    }
    cin>>q;
    while (q--){
        cin>>ele;
        vas+=arr[ele];
        par+=n-arr[ele]+1;
    }
    cout<<vas<<" "<<par;
}

