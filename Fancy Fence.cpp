#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ,s,t;
    float side=0,m;
    bool hex;

    cin>>n ;
    if(n==0){
        cout<<"NO";
    }else if(n>0){
        for(int i=1 ; i<=n ;i++){
            cin>>t;
            m=t/180.00;
            side=(2.00)/(1.00-m);
            hex=(((int)(round(side*100)))%100)!=0;
            if(hex){
                cout << "NO"<<endl;
            }else {
                cout<<"YES"<<endl;
            }
            side=0;

        }
    }


}