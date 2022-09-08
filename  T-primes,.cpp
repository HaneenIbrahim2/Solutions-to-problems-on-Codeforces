#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n , j;
    long long c , f;
    cin>>n;
    for(int i=0;i<n;i++ ){
        cin>>c;
        f=sqrt(c);
        for(  j=2 ;j*j<=f; j++  ){
            if(f%j==0 ){
                break;
            }
        }
        if(j*j>f && f*f ==c&&c>1 ){
            cout<<"YES\n";
        }else
            cout <<"NO\n";

    }
    return 0;
}
