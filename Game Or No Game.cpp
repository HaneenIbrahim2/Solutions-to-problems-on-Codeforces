#include <iostream>
#include <math.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long n, a,b,c;
    cin>>n >>a>>b>>c;
    long long sum=0;
    sum+=a+b+c;
    if(sum%n==0)  {
        cout<<"YES";


    }else
        cout <<"NO";
    return 0;
}
