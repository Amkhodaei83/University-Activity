#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    int num , count=1 , mod , dah=0  ;
    cout << "enter your number : " ;
    cin >> num ;
    while (num!=0)
    {
        mod=num%10;
        num/=10;
        dah+=mod*count ;
        count*=2 ;
    }
    cout << "the final answer : "<< dah ;
}