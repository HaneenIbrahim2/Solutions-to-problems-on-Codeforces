#include<iostream>

using namespace std;
int main()
{
    long long x, d = 0;
    cin >> x;
    do {
        d = x / 10;
        x = x / 10;
    } while (x > 9);
    if (d % 2 == 0) {
        cout << "EVEN";
    }
    else
        cout << "ODD";

}
