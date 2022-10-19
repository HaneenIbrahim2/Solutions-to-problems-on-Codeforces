#include<bits/stdc++.h>
using namespace std;
int main() {

    long long  n , t ,count=0;
    bool less=0,greater=0;
    vector<long long >v;
    cin>> n;
    for(long long i=0 ; i<n ;i++){
        cin>> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());

    for(int i=0 ; i<v.size()-1;i++){

        if(v[0]<v[i]&&v[n-1]>v[i]){
            count++;
        }
    }

    cout<< count;



}