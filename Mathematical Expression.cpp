#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c ,r=0;
    char s ,q='=';
    cin >> a >> s >> b>> q  >>c;

    if (s == '+') {
        if (a + b == c) {
            cout << "Yes";

        }
        else if (a + b != c) {

            r = a + b;
            cout << r;
        }
    } else if (s ==  '-') {
        if ( a - b == c) {
            cout << "Yes";

        }
        else if ( a - b != c) {

            r =  a - b;
            cout << r;
        }
    }if (s ==  '*') {
        if ( a * b == c) {
            cout << "Yes";

        }
        else if ( a * b != c) {

            r =  a * b;
            cout << r;
        }
    }


}