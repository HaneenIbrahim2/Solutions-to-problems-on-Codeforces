#include <iostream>

using namespace std;

int main()
{
    int n ,min1,min2,max1,max2;
    long long arr[100005] ;
    cin>>n;
    for(int i=0 ;i<n;i++ ) {
        cin>>arr[i];
    }
    min1=arr[1 ]-arr[0];
    max1  =arr[n-1] -arr[0];
    cout<<min1<<" "<<max1<<endl ;
    for(int i=1 ;i<n-1 ;i++){
        min1=arr[i+1]-arr[i];
        min2=arr[i]-arr[i-1];
        if(min1>min2){
            cout<<min2<<" ";
        }  else
            cout<<min1<<"  ";
        max1=arr[i]-arr[0];
        max2=arr[n-1]-arr[i];
        if(max1>max2){
            cout << max1 <<" "<<endl;
        }else
            cout<< max2 <<" " <<endl;
    }
    min1=arr[n-1]-arr[n-2];
    max1=arr[n-1]-arr[0];
    cout <<min1<<" "<<max1<<endl;

    return 0;
}
