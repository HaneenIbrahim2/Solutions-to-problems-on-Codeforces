#include<bits/stdc++.h>
using namespace std ;


int main() {

    //P=m/v where v is volume , v= مساحة السطح*الارتفاع
    // مساحة السطح هنا هي مساحة الدايره
    //A/B= p out * v out /p in * v in
    //مساحة السطح الخارجي هو المساحه ما بين الدايره الخارجيه والدايره الداخليه
    //v out = (pi r1^2 - pi r2^2)* h
    //A/B= p1*(r1^2-r2^2)/p2*r2^2
    //(A*p2 +B*p1)r2^2 =B*p1*r1^2
    int n , m , k ,a ,b ,c,A ,B ;
    cin>>n;
    vector<int>x;
    vector<int>y;
    vector<int>z;

    for(int i =0 ; i <n ; i++){
        cin>>a;
        x.push_back(a);
    }cin>>m;
    for(int i =0 ; i<m ;i++){
        cin>>b;
        y.push_back(b);
    }cin>>k;
    for(int i =0 ; i<k ;i++){
        cin>>c;
        z.push_back(c);
    }
    cin>>A>>B;
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    sort(z.begin(),z.end());
    double r1=x.back();
    double p1=y.back();
    double p2= z.front();

    double r2;
    double power=pow(r1,2);
    r2= sqrt((B*p1* power)/((A*p2)+(B*p1)));
    cout<<fixed<<setprecision(12)<<r2;

}




