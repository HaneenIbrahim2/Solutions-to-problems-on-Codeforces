#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long long a, b, c, d, A, B, C, D;

    cin >> a >> b >> c >> d;

    if (d==(a-b+c  ) || d ==(a +b-c   )    || d== (( a*b )-c   ) || d== (( a*b )+c   ) ||  d== (a +( b*c )  ) ||  d== a-( b*c )   ){
        cout << "YES";
    }
    else
        cout << "NO";


}

