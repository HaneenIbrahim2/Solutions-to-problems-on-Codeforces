#include <iostream>

using namespace std;

int main()
{

    int n ,x,v;
    cin >>  n;


    for (int i =1; i<=n; i++) {
        cin >> x;
        if(x==0){
            cout<<x ;
        } else
            while(x){
                v=x%10;
                x=x/10;
                cout<<v<<" ";
            }

        cout<<endl;
    }
    return 0;
}