#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h>
using namespace std;
double circle (int a)
{
    cout << "mass is :" << a*a*3.14 << endl << "environment is : " << a*2*3.14 << endl ; 
}
double squere (int a )
{
    cout << "mass is :" << a*a << endl << "environment is : " << a*4 << endl ; 
}
double rectangle (int a , int b )
{
    cout << "mass is :" << a*b << endl << "environment is : " << ((a*2)+(b*2)) << endl ; 
}
double triamgle (int a )
{
    cout << "mass is :" << (a*a*sqrt(3))/2 << endl << "environment is : " << a*3 << endl ; 
}
int main()
{
    int cho ;
    char ch = 'y' ;
    double a , b ;
    while (ch =='y')
    {
        cout << "what is your shape ?" << endl 
        << "(enter 1 for circle 2 for squere 3 for rectangle 4 for triamgle)" << endl ;
        cin >> cho ;
        switch (cho)
        {
            case (1) :
                cout << "enter the radios of your circle : " ;
                cin >> a ;
                circle(a);
                break;
            case 2 :
                cout << "enter the side of your squere : " ;
                cin >> a ;
                squere(a);
                break;
            case 3 :
                cout << "enter the firs side of your rectangle : " ;
                cin >> a ;
                cout << "enter the second side of your rectangle : " ;
                cin >> b ;
                rectangle(a , b );
                break;
            case 4 :
                cout << "enter the side of your triamgle : " ;
                cin >> a ;
                triamgle(a);
                break;
            default:
                cout << "invalide number !!" << endl ; 
                break;
        }
        cout << "do tou want to continio ? (y,n) " ; 
        cin >> ch ;
    }
    return(0);
}