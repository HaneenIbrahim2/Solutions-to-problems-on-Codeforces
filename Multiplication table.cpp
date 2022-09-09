#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n, m;
    cin>>n;
    for (int i = 1; i <= 12; i++) {
        m = i * n;
        cout << n << " " << "*" <<" "<< i<<" "<< "=" << " " << m << endl;
    }
}