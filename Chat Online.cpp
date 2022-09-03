#include<bits/stdc++.h>
using namespace std ;


int main() {

    long long p , q , l , r , c , d ,t=0;
    long long  tmax, tmin;
    cin>>p>>q>>l>>r;
    long long a[p],b[p];
    long long v2[10004]={0};

    for(int i=0 ; i<p ; i++){
        cin>>a[i]>>b[i];

    }for(int i=0 ; i<q ; i++){
        cin>>c>>d;
        for(int j=0 ; j<p ; j++){
            tmin=a[j]-d ;
            tmax=b[j]-c;
            if (tmin>r || tmax<l){
                continue;
            }
            for(int k =max(tmin,l);k<=min(r,tmax); k++){
                if(v2[k]==0){ //or !v2[k]
                    t++;
                    v2[k]=1;
                }
            }
        }
    }



    cout<<t;
}




