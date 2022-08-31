#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n ,count,max=0;
    cin>>n;
    long long arr[n];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0 ; i<n ;i++){
        count=0;
        if(i==0) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] <= arr[j - 1]) {
                    count++;

                } else
                    break;
            }
            if (count + 1 > max) {
                max = count+1;

            }
        }else if(i==n-1){
            for(int j=i-1; j>=0;j--){
                if(arr[j]<=arr[j+1]){
                    count++;
                }else
                    break;

            }
            if(count+1>max) {
                max = count + 1;
            }
        }else{
            for(int j=i+1 ;j<n ; j++){
                if(arr[j]<=arr[j-1]){
                    count++;
                }else
                    break;
            }
            for(int j=i-1; j>=0 ; j--){
                if(arr[j]<=arr[j+1]){
                    count++;
                }else
                    break;
            }
            if(count+1>max) {
                max = count + 1;
            }

        }



    }
    cout<<max<<endl;
}