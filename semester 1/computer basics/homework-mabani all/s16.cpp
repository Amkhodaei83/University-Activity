#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    double a=1,b=1,c;
    cout << "0" << endl << a << endl << b << endl ;
    for (int i=3;i<50;i++)
    {
        c=a+b ;
        cout << c << endl;
        a=b , b=c ;
    }
}