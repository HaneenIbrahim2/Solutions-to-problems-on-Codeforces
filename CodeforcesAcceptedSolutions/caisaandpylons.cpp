#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n , m,max=0;
    vector<int>v;
    cin>>n;
    for(int i=0 ;i<n ;i++) {
        cin>>m;
        v.push_back(m);

    }for(int i=0 ; i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    cout<<max;
}
