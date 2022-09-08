#include <iostream>

#include <iomanip>
using namespace std;


int main()
{
    double a,b,c ;
    cin >> a >>b >>c ;
    double R  =  (2*a +3*b) * 5*c  ;
    cout <<  fixed ;
    cout << setprecision (6)<<R;

    return 0;
}
