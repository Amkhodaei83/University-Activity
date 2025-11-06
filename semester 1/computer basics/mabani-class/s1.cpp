#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    double x , y ;
    string z ;
    cout << "what do you want to do ? (*,-,+,/) ";
    cin >> z ;
    cout << "enter your first number : ";
    cin >> x ;
    cout << "enter you second number : ";
    cin >> y ;
    
    if(z== "+")
        {
            cout << "the resoult : " << y+x ;
        }
    else if(z == ("-"))
        {
            cout << "the result : " << x-y ;
        }
    else if (z == ("*"))
        {
            cout << "the resoult : " << y*x ;
        }
    else if (y==0)
        {
            cout << "0" ;
        }
    else if (z == ("/"))
        {
            cout << "the resoult : " << y/x ;
        }
}