#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    long long  a, b, c  , maxim , minim , defult ;
    cin >> a >> b >> c;
    maxim = max(c, max(a, b));
    minim = min(c, min(a, b));

    if (maxim != a&&minim!=a) {
        cout << minim << endl;
        cout << a << endl;
        cout << maxim << endl;
        cout << endl;
        cout << a << "\n" << b << "\n" << c;
    }
    else if (maxim != b && minim != b) {
        cout << minim << endl;
        cout << b << endl;
        cout << maxim << endl;
        cout << endl;
        cout << a << "\n" << b << "\n" << c;
    }
    else  if (maxim !=  c && minim != c) {
        cout << minim << endl;
        cout <<  c<< endl;
        cout << maxim << endl;
        cout << endl;
        cout << a << "\n" << b << "\n" << c;
    }
    else if (  maxim == minim)
    {
        cout << a << "\n" << b << "\n" << c << endl;
        cout << endl;
        cout << a << "\n" << b << "\n" << c;
    }
    else if (maxim == a && maxim == b) {

        cout <<  c << "\n" << b << "\n" <<  a << endl;
        cout << endl;
        cout << a << "\n" << b << "\n" << c;

    }
    else if (maxim == a && maxim == c) {

        cout <<  b<< "\n" << c << "\n" << a << endl;
        cout << endl;
        cout << a << "\n" << b << "\n" << c;

    }
    else if (maxim == c && maxim == b) {

        cout <<  a << "\n" << b << "\n" <<  c<< endl;
        cout << endl;
        cout << a << "\n" << b << "\n" << c;
    }
    else if (minim == a && minim == b) {

        cout << a << "\n" << b << "\n" << c << endl;
        cout << endl;
        cout << a << "\n" << b << "\n" << c;

    }
    else if (minim == a && minim ==  c) {

        cout << a << "\n" << c << "\n" <<  b << endl;
        cout << endl;
        cout << a << "\n" << b << "\n" << c;

    }
    else if (minim == c  && minim == b) {

        cout <<  c << "\n" << b << "\n" << a << endl;
        cout << endl;
        cout << a << "\n" << b << "\n" << c;

    }






}