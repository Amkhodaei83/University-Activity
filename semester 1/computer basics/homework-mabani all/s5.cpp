#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    int point , n , second=0 , first=0 ; 
    cout << "enter nuber of student : " ;
    cin >> n ;
    for (int i=0 ; i<n ;i++ )
    {
        cout << "enter avrage point : " ;
        cin >> point ;
        if (point>first)
            {
                second=first;
                first=point;
                
            }
        else if (point>second)
            {
                second=point;
            }
    }
    cout << "max is : " << first << endl << "second is : " << second << endl ;
}