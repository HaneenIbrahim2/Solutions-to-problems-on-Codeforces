#include <iostream>

using namespace std;

int main()
{
    int N ;
    int M ;
    char S ;
    cin >>  N>>  S>>  M;
    if (S=='='  && N==M  ){
        cout << "Right ";
    } else if (S=='>' && N>M ) {
        cout << "Right";


    } else if (S=='<' && N<M ){
        cout << " Right  ";
    } else
        cout << " Wrong ";

    return 0;
}
