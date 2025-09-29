#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    int num ;
    cout << "enter your number : " ;
    cin >> num ;
    if (num>100)
    {cout << "invalide number " ; }
    else if (90<=num)
    {cout << "A" ; }
    else if (80<=num)
    {cout << "B" ; }
    else if (70<=num)
    {cout << "C" ; }
    else if (60<=num)
    {cout << "D" ; }
    else if (0<num)
    {cout << "F" ; }
    else if (num<0)
    {cout << "invalide number " ; }
}