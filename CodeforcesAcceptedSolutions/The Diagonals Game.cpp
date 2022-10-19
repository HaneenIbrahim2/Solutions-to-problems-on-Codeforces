#include <iostream>
#include <math.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, j ,i;
    int arr[1001][1001 ];
    long long sum1=0 ,sum2=0;
    cin>>n ;
    for(i=0 ;i<n ;i++  ){
        for(j=0 ;j<n ;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0; i<n ;i++){
        for(j=0 ; j<n ; j++){
            if(i==j){
                sum1+=arr[i][j];

            }
        }
    } for (i=0; i<n ; i++)   {
        for (j=0  ; j < n ; j ++){
            if(i+j==n-1 ){
                sum2+=arr[i][j];
            }

        }
    }
    cout <<  sum1 <<" " <<sum2;
    return 0;
}
