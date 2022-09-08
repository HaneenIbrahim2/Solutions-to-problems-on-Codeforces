#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
int main()

{
    int i;
    char b;
    cin >> b >> i;
    if (b == 'a') {
        b = 1;
    }
    else if (b == 'b') {
        b = 2;
    }
    else if (b == 'c') {
        b = 3;
    }
    else if (b == 'd') {
        b = 4;
    }
    else if (b == 'e') {
        b = 5;
    }
    else if (b == 'f') {
        b = 6;
    }
    else if (b == 'g') {
        b = 7;
    }
    else if (b == 'h') {
        b = 8;
    }
    int moves = min( b-1,i-1) + min(b-1 ,8-i) + min(8-b ,i-1 ) + min( 8-b,8-i);
    cout << moves;


}