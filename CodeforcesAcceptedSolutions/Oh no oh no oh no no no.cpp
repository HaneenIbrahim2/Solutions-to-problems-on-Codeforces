#include <iostream>
#include <math.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int decimalN=0;
    int arr[ 16]={} ;
    for(int i=0;n>0;i++ ){
        arr[i]=n%2;
        n=n/2;
    }
    for(int i=0;i<16 ;i++){
        decimalN+=arr[i]* pow(2, 15-i);

    }
    cout <<decimalN ;


    return 0;
}
