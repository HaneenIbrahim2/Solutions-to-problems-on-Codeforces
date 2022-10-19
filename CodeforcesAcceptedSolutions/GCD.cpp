#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int a, b, A=0, B=0, max = 0;
    cin >> a >> b;
    if (a < b) {
        for (int i = 1; i <= a; i++) {
            if (a % i == 0) {
                A = i;
            }
            else
                continue;
            if (b % i == 0) {
                B = i;
            }
            else
                continue;
            if (A == B) {
                if (max < A) {
                    max = A;
                }
            }

        }
        cout << max;
    }else if ( b < a) {
        for (int i = 1; i <= b; i++) {
            if (a % i == 0) {
                A = i;
            }
            else
                continue;
            if (b % i == 0) {
                B = i;
            }
            else
                continue;
            if (A == B) {
                if (max < A) {
                    max = A;
                }
            }

        }
        cout << max;
    } else if (b == a) {
        for (int i = 1; i <= b; i++) {
            if (a % i == 0) {
                A = i;
            }
            else
                continue;
            if (max < A) {
                max = A;
            }

        }
        cout << max;
    }

}