#include <iostream>

using namespace std;

int main()
{
    long long  A, B, C;
    cin >>  A>>  B >>   C;
    if (A>=B &&B>=C ) {
        cout <<  C << " " << B << " " << A;
    } else if (A>=B&& C>=B && A>=C ){
        cout << B << " " << C << " " << A;
    }  else if (  B>=A &&  A>=C){
        cout << C << " " << A << " " << B;
    } else if (B>=A && B>=C && C>=A  ) {
        cout<< A << " " << C << " " << B ;
    }else if ( C>=A &&  A>=B ) {
        cout  << B << " " << A << " " << C ;
    }  else if (C>=A && C>=B && B>=A ){
        cout << A << " " << B << " " << C;
    }


    return 0;
}
  