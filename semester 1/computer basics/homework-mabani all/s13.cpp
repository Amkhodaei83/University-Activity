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
    cin >> b ;
    cout << "enter third side : " ;
    cin >> c ;
    if (a+b>c)
        {
            if (b+c>a)
            {
                if (c+a>b)
                {
                cout << "ok" <<endl;
                }
                else 
                {
                cout << "not ok"<<endl ;
                }
            }
            else 
        {
        cout << "not ok"<<endl ;
        }
        }
    else 
    {
    cout << "not ok"<<endl ;
    }
}
