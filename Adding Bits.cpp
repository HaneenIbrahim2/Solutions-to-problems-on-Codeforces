#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long long a, b, bit1[32] = {}, bit2[32] = {}, bit3[32] = {}, decimal = 0;

    cin >> a >> b;
    for (int i = 0; a > 0; i++)
    {
        bit1[i] = a % 2;
        a = a / 2;

    }
    for (int i = 0; b > 0; i++)
    {
        bit2[i] = b % 2;
        b = b / 2;

    }
    for (int i = 0; i <= 32; i++) {

        bit3[i] = bit2[i] + bit1[i] ;
        if (bit3[i] == 2) {
            bit3[i] = 0;

        }
        else if (bit3[i] == 3) {
            bit3[i] = 1;

        }



    }
    for (int i = 0; i < 32; i++) {
        decimal = decimal + (bit3[i] * pow(2, i));

    }
    cout << decimal;
}