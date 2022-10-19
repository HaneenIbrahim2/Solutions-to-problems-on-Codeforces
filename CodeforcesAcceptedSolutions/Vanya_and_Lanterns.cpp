#include<bits/stdc++.h>
using namespace std ;
int main() {

    int n ,a;
    int l ;
    double result , d1 ,d2;
    vector<int> v ;
    vector<double> s ;
    cin>>n;
    cin>>l;

    for(int i=0 ; i<n;i++){
        cin>>a;
        v.push_back(a);

    }
    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++){
        if(i==0){
            s.push_back(v[i]);
        }else {
            s.push_back(v[i] - v[i - 1]) ;
        }
    }
    sort(s.begin(),s.end());
    result=s.back()/2.0;
    d1=l-v.back();
    d2=v.front()-0;
    if(result<(d2)&& d1==0){
        result=d2;

    }else if(result< d1 && d2==0){
        result=d1;
    }else if(result<d2 || result<d1){
        if(d2>d1){
            result=d2;
        }else if(d2<d1){
            result=d1;
        }else {
            result =d1;
        }
    }
    cout<<fixed<<setprecision(10)<<result;


}

