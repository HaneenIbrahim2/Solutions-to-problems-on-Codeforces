#include <iostream>
#include <math.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long  n ,x ,p ,d;
    long long  count=0;
    cin >>n;
    for (int i=1 ;i<=n;i++){
        cin >>x>>p>>d;

        x*=(p-d) ;
        count+=x;

    }
    cout << count ;
    return 0;
}
