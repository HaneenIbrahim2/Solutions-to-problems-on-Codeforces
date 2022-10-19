#include <iostream>
#include <math.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n   ;
    cin>>n;
    char a,b;
    char arr[1001];
    cin>>arr;
    int calculat=0;
    for(int i=0  ;i<n;i++){

        for (int j=i+1;j<n ;j++){

            if( arr[ i]=='a'&&arr[j] =='b' ){
                calculat++   ;
            }

        }
    }
    cout << calculat;
    return 0;
}
