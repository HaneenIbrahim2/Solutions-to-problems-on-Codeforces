#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    bool flag=0,temp=0;
    cin>>n;
    char arr[n][n];
    vector<char> arr2 ,arr3;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>> arr[i][j];
        }
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==j || (i+j)==(n-1)){
                arr2.push_back(arr[i][j]);
            }
        }
    }for(int i=0 ; i<arr2.size()-1 ; i++){
        if(arr2[i]!=arr2[i+1]){
            flag=1;
        }


    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++) {
            if(i!=j &&(i+j)!=(n-1)){
                arr3.push_back(arr[i][j]);

            }

        }
    }

    for(int i=0 ; i<arr3.size()-1 ; i++){
        if(arr3[i]!=arr3[i+1]){
            temp=1;
        }

    }
    if(temp==1 ||arr2[0]==arr3[0] || flag==1){

        cout<<"NO";
    }else if (temp==0 && flag==0 &&arr2[0]!=arr3[0]){
        cout<<"YES";
    }



}
 
 