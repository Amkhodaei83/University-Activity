#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    int num , i=0 , min=2147483647 ;
    cout << min ;
    while (i<1000)
    {
        i++;
        cout << "enter number " << i << " :"; 
        cin >> num ;
        if (num<=min)
            {
                min=num ;
            }
    }
    cout << "min is : " << min << endl ;

}