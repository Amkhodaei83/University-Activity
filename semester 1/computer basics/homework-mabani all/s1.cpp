#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    int a , c , b ;
    cout << "enter your number " ;
    cin >> a ;
    cout << "enter yor number " ;
    cin >> c ;
    if (c>a)
        {
            a=a+c;
            c=a-c;
            a=a-c;
        }
    cout << "enter your number " ;
    cin >> b ;
    if (a<b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
            
        }
    else if (b<c)
        {
            b=b+c;
            c=b-c;
            b=b-c;
        }
    cout << a << ">" << b << ">" << c ;
    
        
}