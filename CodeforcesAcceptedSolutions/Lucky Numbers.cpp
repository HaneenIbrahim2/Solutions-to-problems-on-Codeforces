#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int array[2], x, y=0;

    cin >> x;


    y = x % 10;
    x = x / 10;
    array[0] = x;
    array[1] = y;
    if (   y ==0) {
        cout << "YES";
    }else

    if (array[0] % array[1] == 0 || array[1] % array[0] == 0) {
        cout << "YES";


    } else
        cout << "NO";

}