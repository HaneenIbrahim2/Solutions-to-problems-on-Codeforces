#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum ;
    cin >> n;
    if (n==0){
        cout << n ;
    } else if (n==1)   {
        cout <<    n  ;
    } else if ( n==2){
        cout <<     1+n      ;
    }else if (n==3) {
        cout << 1+2+n  ;

    }else if (n==4){
        cout << 1+2+3+n ;

    } else if (n==5){
        cout << 1+2+3+4+n ;

    }else if (n==6){
        cout << 1+2+3+4+5+n ;

    }else if (n==7){
        cout << 1+2+3+4+5+6+n  ;
    }else if (n==8){
        cout << 1+2+3+4+5+6+7+n  ;

    }else  if (n==9){
        cout << 1+2+3+4+5+6+7+8+n ;

    }else if (n==10){
        cout << 1+2+3+4+5+6+7+8+9+n ;
    }

    return 0;
}