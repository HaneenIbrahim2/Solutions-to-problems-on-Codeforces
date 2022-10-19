#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int  n, count = 0 ,digit=0 ,x,y,z;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        x = ++digit;
        y = ++digit;
        z = ++digit;
        cout << x << " " << y << " " << z << " ";


        cout << "PUM" << endl;
        digit += 1;
    }



}