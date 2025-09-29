#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    int a , b , c ;
    cout << "enter first side : " ;
    cin >> a ;
    cout << "enter second side : " ;
    cin >> c ;
    if (c>a)
        {
            a=a+c;
            c=a-c;
            a=a-c;
        }
    cout << "enter third side : " ;
    cin >> b ;
    if (a<b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
            
        }
    if ((a*a)==((b*b)+(c*c)))
        {
            cout << "its right triangle " ;
        }
    else
    {
        cout << "its not right triangle " ;
    }
}