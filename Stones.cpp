#include <iostream>

using namespace std;

int main()
{
    long long N;

    cin >> N   ;
    if ( 1<=N>=10^9&& N!=1  ){
        cout <<"2 "    ;
    } else if ( N=1) {
        cout << "1";
    }
    return 0;
}