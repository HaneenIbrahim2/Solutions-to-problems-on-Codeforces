#include <iostream>

using namespace std;

int main()
{

    int w,n,r , i ;
    cin>>w>>n;
    char arr[55 ];

    for(  i= 1  ;i<=n   ;i++  ){
        cin>>arr[i];
    }
    for(i=1;i<=n;i++ ){
        cin>>r;

        if(arr[ r]=='E'){
            w+=2;
        }else if(arr[ r]=='T'){
            w-=1;
        }
        cout<<w << " ";

    }
    return 0;
}
 