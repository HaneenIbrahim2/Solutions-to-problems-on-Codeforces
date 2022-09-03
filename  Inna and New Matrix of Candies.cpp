#include<bits/stdc++.h>
using namespace std ;


int main() {
    int n , m , s, g ;
    cin>>n>>m ;
    char arr[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>arr[i][j];

        }
    }
    set<int>k;
    for(int i=0 ; i<n ; i++){
        bool G=0;
        for(int j=0 ; j<m ; j++){
            if(arr[i][j]=='S' && G==0){
                cout<<-1;
                return 0;

            }else if(arr[i][j]=='G'){
                G=1;
            }
        }
    }for(int i =0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(arr[i][j]=='S'){
                s=j;
            }else if(arr[i][j]=='G'){
                g=j;
            }
        }
        k.insert(s-g);

    }
    cout<<k.size();

}




