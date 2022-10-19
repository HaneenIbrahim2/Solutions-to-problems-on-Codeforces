#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b  ;
    if ((a- b)==1||(b-a)==1||(a-b)==0){
        if (a == 0 && b == 0) {
            cout << "NO";
        }else
            cout << "YES";

    }
    else
        cout << "NO";



}
