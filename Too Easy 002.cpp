#include <iostream>

using namespace std;

int main(){
    int    N;
    int  M;
    cin  >>   N >>   M ;

    for (  int  X=1 ;  X<= M ;  X++     ) {
        if (N % X ==0)  {
            cout <<  X << ' ' << "is a divisor of" << ' ' <<   N <<  endl;
        }


    }




    return 0;
}
