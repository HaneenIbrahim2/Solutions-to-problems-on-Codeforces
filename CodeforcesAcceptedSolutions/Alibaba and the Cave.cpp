#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a+b*c==d ) {
        cout << "yes";
    }else if(a-b+c==d){
        cout <<  "yes";
    } else if(a*b-c==d ) {
        cout << " yes";
    } else if (a-b*c==d){
        cout<<" yes";
    } else if(a*b+c ==d ){
        cout << "yes" ;
    } else if(a+b-c==d  ){
        cout << "yes";
    }  else
        cout<< "NO";



    return 0;
}
