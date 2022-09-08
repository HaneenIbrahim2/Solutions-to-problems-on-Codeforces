#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{
    long long n, counte = 0, counto = 0, v;
    cin >> n;
    if (n < 10) {
        if (n % 2 == 0) {
            counte++;
            cout << "Even : " << counte << endl;
            cout << "Odd : " << counto;
        }
        else if (n % 2 != 0) {
            counto++;
            cout << "Even : " << counte << endl;
            cout << "Odd : " << counto;
        }
    }
    else if (n >= 10) {
        while (n >0 ) {
            v = n % 10;
            if (v % 2 == 0) {
                counte++;


            }
            else

                counto++;
            n = n / 10;


        }
        cout << "Even : " << counte << endl;
        cout << "Odd : " << counto;
    }
}