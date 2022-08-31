#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n ;
    int arr[]={8,4,2,6};
    cin>>n;
    if(n==0){
        cout<<"1";
    }else if(n>0){
        n=(n-1)%4;
        cout<<arr[n];
    }


}
 