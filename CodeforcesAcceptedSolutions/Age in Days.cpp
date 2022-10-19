#include<iostream>

using namespace std;
int main()
{
    int n, m=0, y=0, d=0;
    cin >> n;
    while (n >= 365) {
        y++;
        n = n - 365;
    }
    while (n >= 30) {
        m++;
        n = n - 30;

    }
    while (n < 30 && n != 0) {
        d++;
        n = n - 1;
    }
    cout << y << " years"    <<"\n" << m << " months"   <<"\n" <<d<< " days";
}



