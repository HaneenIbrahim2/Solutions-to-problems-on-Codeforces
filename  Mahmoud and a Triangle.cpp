#include<bits/stdc++.h>
using namespace std ;
int main() {
    //A non-degenerate triangle is a triangle with positive area.
    //when a+b>c and a+c>b and c+b>a
    long long n , x;
    bool  flag= false;
    cin>>n ;
    vector<long long>v;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-2 ; i++){
        if(v[i]+v[i+1]>v[i+2]) {
            flag = true;
            break;
        }

    }
    if(flag){

        cout<<"YES";
    }else{
        cout << "NO";

    }





}

