#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
int main()

{

    long long n;
    cin >> n;
    if (ceil(log2(n)) == floor(log2(n))) {
        cout<<"yes";

    }else
        cout<<"no";

}