#include<bits/stdc++.h>
using namespace std ;


int main() {
    //لو في اربع ارقام او اكتر في ال array مختلفين مستحيل نلاقي رقم لو جمعناه او طرحناه منهم هيبقوا متساويين
    //لو رقمين اكيد الرقم الى هيخليهم متساوين هو طرحهم من بعض فدول اكيد هيكونوا متساويين
    // ال3 ارقام هيكونوا متساوين في حالة واحده   b-c==a-b
    long long n ,x ;
    cin>>n ;
    std:: vector<long long>v;
    list<int>l;
    for(long long i=0 ; i<n ; i++){
        cin>>x;
        v.push_back(x);

    }
    sort( v.begin(), v.end() );
    v.erase( unique( v.begin(), v.end() ), v.end() );

    if(v.size()>=4){
        cout<<"No";

    }else if(v.size()==2 || v.size()==1){
        cout<<"YES";
    }else
    {
        if((v.at(1)-v.at(0))==(v.at(2)-v.at(1))){
            cout<<"YES";

        }else{
            cout<<"NO";
        }
    }


}




