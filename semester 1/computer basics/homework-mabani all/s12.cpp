#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    for (int b=0 ;b<7;b++)
    {
        for (int i=0 ;i<10;i++)
        {
            cout << "* " ;
        }
    cout << endl ;
        if(b%2==0)
        {
            cout << " ";
        }
    }    
}