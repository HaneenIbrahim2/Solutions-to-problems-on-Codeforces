#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    double n;
    cin >> n;
    int intpart = (int)n  ;
    double decpart = n - intpart;

    if (n == floor(n)) {
        cout <<"int" <<" " <<floor(n)   ;
    }
    else

        cout << "float"<<" " <<floor(n)<<" "<<decpart ;






}