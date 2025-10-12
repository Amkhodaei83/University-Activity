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
                cout << "* " ;
            }
        cout << endl ;
        j-- ;
        i++ ;
        }
}