#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long long x;
    bool t = true;
    cin >> x;

    for (int i =2; i < x; i++) {
        if (x % i != 0) {
            t = false;
        }
        else if (x % i == 0) {
            t = true;
            break;
        }
    }if (t == false || x==2){
        cout << "YES";

    }
    else
        cout << "NO";



}