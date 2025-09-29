#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    int num , inc=1 ,dec , i ;
    cout << "enter your number : " ;
    cin >> num ;
    dec=num ;
    for ( ; inc<=num ; inc++ , dec-- )
        {
            for( i= 0 ; i<inc ; i++ )
            {
                cout << "*" ;
            }
            for(i=1 ; i<dec ; i++ )
            {
                cout << " ";
            }
        cout << "\t" ;
            for(i=0 ; i<dec ; i++ )
            {
                cout << "*";
            }
            for( i= 1 ; i<inc ; i++ )
            {
                cout << " " ;
            }
        cout << "\t" ;
            for( i= 1 ; i<inc ; i++ )
            {
                cout << " " ;
            }
            for(i=0 ; i<dec ; i++ )
            {
                cout << "*";
            }
        cout << "\t" ;
            for(i=1 ; i<dec ; i++ )
            {
                cout << " ";
            }
            for( i= 0 ; i<inc ; i++ )
            {
                cout << "*" ;
            }
        cout << endl ;
        }

}