#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    int i=0,space=0 , num ;
    cout << "enter the squar side : " ;
    cin >> num ;
    while (i < num)
    {
        i++ ;
        cout << "*" ;
    }
    cout << endl ;
    i=0;
    while (i<num)
    {
        i++;
        cout << "*" ;
        while (space<(num-2))
        {
            space++;
            cout << " ";
        }
        space=0;
        cout << "*\n";
    }
    i=0;
    while (i < num)
    {
        i++ ;
        cout << "*" ;
    }
}