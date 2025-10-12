#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
        int num , i=0 , j , counter ;
    cout << "enter your number : " ;
    cin >> num ;
    j=(num-1);
    for (;i<num;)
        {
            for (counter = 0 ; counter < j ; counter++ )
            {
                cout << " ";
            }
            for (counter = 0;counter <= i;counter++)
            {
                cout << "*" ;
            }
            for (counter = 0;counter <= (i-1);counter++)
            {
                cout << "*" ;
            }
        cout << endl ;
        j-- ;
        i++ ;
        }
    i=1;
    j=num;
    for (;i<num;)
        {
            for (counter = 0 ; counter < i ; counter++ )
            {
                cout << " ";
            }
            for (counter = 0;counter < (j-1);counter++)
            {
                cout << "*" ;
            }
            for (counter = 0;counter < (j-2);counter++)
            {
                cout << "*" ;
            }
            
        cout << endl ;
        j-- ;
        i++ ;
        }
}