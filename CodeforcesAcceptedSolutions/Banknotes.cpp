#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long double n;
    long long m = 0;
    cin >> n;
    if (n < 20) {
        m = n;
        cout << n;
    }
    else if (n >= 20 && n < 50) {
        if (n / 20 == 2 && n >= 40) {
            m += 2;
        }
        else if (n / 20 != 2 && n >= 40) {
            n = n - 40;
            m = 2 + n;
        }
        else if (n / 20 == 1 && n < 40) {
            m = 1;
        }

        else if (n / 20 != 1 && n < 40) {
            n = n - 20;
            m = 1 + n;
        }
        cout << m;
    }
    else if (n >= 50) {


        if (n / 50 != floor(n / 50)) {
            m = ((long long)n) / 50;
            n = n - ((long long)n / 50) * 50;

            if (n < 20) {
                m += n;

            }
            else if (n >= 20 && n < 50) {
                if (n / 20 == 2 && n >= 40) {
                    m += 2;
                }
                else if (n / 20 != 2 && n >= 40) {
                    n = n - 40;
                    m += 2 + n;
                }
                else if (n / 20 == 1 && n < 40) {
                    m += 1;
                }

                else if (n / 20 != 1 && n < 40) {
                    n = n - 20;
                    m += 1 + n;
                }
            }
        }  if (n / 50 == floor(n / 50)) {
            m += n / 50;
        }
        cout << m;

    }






}
