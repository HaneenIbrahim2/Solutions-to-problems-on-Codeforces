#include<bits/stdc++.h>
using namespace std;
int main() {
    long long  n , a , sum1=0 , sum2 ,count=0;
    vector<int>v;
    cin>> n;
    for(int i=0 ; i<n ; i++){
        cin>>a ;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i= n-1 ; i>=0; i--){
        sum2=0;
        sum1=sum1+v[i];
        for(int j=0 ; j <i ;j++ ){
            sum2=sum2+v[j];

        }
        count++;
        if(sum1 > sum2){
            cout<< count;
            break;

        }

    }


}