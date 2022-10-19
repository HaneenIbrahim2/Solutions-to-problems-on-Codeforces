#include <iostream>

using namespace std;

int main()
{
    char W,D,L;
    int sumW=0;
    int sumD=0;
    int sumL=0;
    int sum=0;
    char arr[ 10] ;
    cin>>arr;
    for(int i=0; i< 10 ;i++){
        if(arr[i]=='/0'){
            break;
        }
        if(arr[i]=='W' ){
            sumW=sumW+3   ;
        }else if (arr[i]=='D'){
            sumD ++  ;
        }else if (arr[i]=='L'){
            sumL=sumL+0 ;
        }
        sum = sumW +sumD+sumL ;

    }
    if (sum>=6){
        cout<<"Qualified!" ;

    }else

        cout <<"Probably Not."   ;


    return 0;
}