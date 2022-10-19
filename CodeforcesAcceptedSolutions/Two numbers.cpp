#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    double a, b ,drevative ;
    cin >> a >> b;
    drevative = a / b;
    cout << "floor " << a << " / " << b << " = " << floor(drevative) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(drevative)<<endl;
    cout << "round " << a << " / " << b << " = " << round(drevative)<<endl ;



}